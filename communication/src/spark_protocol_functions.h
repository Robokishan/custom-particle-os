/* 
 * File:   functions.h
 * Author: mat
 *
 * Created on 04 September 2014, 00:10
 */

#pragma once

#include <stdint.h>
#include <time.h>
#include "system_tick_hal.h"
#include "spark_descriptor.h"
#include "events.h"

#ifdef	__cplusplus
extern "C" {
#endif
    
    
class SparkProtocol;    
    
struct SparkKeys
{
  unsigned char *core_private;
  unsigned char *server_public;
};

struct SparkCallbacks
{
  int (*send)(const unsigned char *buf, uint32_t buflen);
  int (*receive)(unsigned char *buf, uint32_t buflen);
  void (*prepare_to_save_file)(uint32_t sflash_address, uint32_t file_size);
  void (*prepare_for_firmware_update)(void);
  void (*finish_firmware_update)(void);
  uint32_t (*calculate_crc)(unsigned char *buf, uint32_t buflen);
  unsigned short (*save_firmware_chunk)(unsigned char *buf, uint32_t buflen);
  void (*signal)(bool on);
  system_tick_t (*millis)();
  void (*set_time)(time_t t);
};

/**
 * Application-supplied callbacks. (Deliberately distinct from the system-supplied
 * callbacks.)
 */
typedef struct CommunicationsHandlers {

    /**
     * Handle the cryptographically secure random seed from the cloud.
     * @param seed  A random value. This is typically used to seed a pseudo-random generator. 
     */
    void (*random_seed_from_cloud)(unsigned int seed);
    
} CommunicationsHandlers;    
    

void spark_protocol_communications_handlers(SparkProtocol* protocol, CommunicationsHandlers* handlers);

void spark_protocol_init(SparkProtocol* protocol, const char *id,
          const SparkKeys &keys,
          const SparkCallbacks &callbacks,
          const SparkDescriptor &descriptor);
int spark_protocol_handshake(SparkProtocol* protocol);
bool spark_protocol_event_loop(SparkProtocol* protocol);
bool spark_protocol_is_initialized(SparkProtocol* protocol);
int spark_protocol_presence_announcement(SparkProtocol* protocol, unsigned char *buf, const char *id);
bool spark_protocol_send_event(SparkProtocol* protocol, const char *event_name, const char *data,
                int ttl, EventType::Enum event_type);
bool spark_protocol_send_subscription_device(SparkProtocol* protocol, const char *event_name, const char *device_id);
bool spark_protocol_send_subscription_scope(SparkProtocol* protocol, const char *event_name, SubscriptionScope::Enum scope);
bool spark_protocol_add_event_handler(SparkProtocol* protocol, const char *event_name, EventHandler handler);
bool spark_protocol_send_time_request(SparkProtocol* protocol);
void spark_protocol_send_subscriptions(SparkProtocol* protocol);


/**
 * Decrypt a buffer using the given public key.
 * @param ciphertext        The ciphertext to decrypt
 * @param private_key       The private key (in DER format).
 * @param plaintext         buffer to hold the resulting plaintext
 * @param max_plaintext_len The size of the plaintext buffer
 * @return The number of plaintext bytes in the plain text buffer, or 0 on error.
 */
extern int decrypt_rsa(const uint8_t* ciphertext, const uint8_t* private_key, 
        uint8_t* plaintext, int max_plaintext_len);

#ifdef	__cplusplus
}
#endif

