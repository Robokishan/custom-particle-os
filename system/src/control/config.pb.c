/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9 at Fri Dec  1 01:50:17 2017. */

#include "config.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t particle_ctrl_SetClaimCodeRequest_fields[2] = {
    PB_FIELD(  1, STRING  , SINGULAR, STATIC  , FIRST, particle_ctrl_SetClaimCodeRequest, code, code, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_SetClaimCodeReply_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_SetSecurityKeyRequest_fields[3] = {
    PB_FIELD(  1, UENUM   , SINGULAR, STATIC  , FIRST, particle_ctrl_SetSecurityKeyRequest, type, type, 0),
    PB_FIELD(  2, BYTES   , SINGULAR, CALLBACK, OTHER, particle_ctrl_SetSecurityKeyRequest, data, type, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_SetSecurityKeyReply_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_GetSecurityKeyRequest_fields[2] = {
    PB_FIELD(  1, UENUM   , SINGULAR, STATIC  , FIRST, particle_ctrl_GetSecurityKeyRequest, type, type, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_GetSecurityKeyReply_fields[2] = {
    PB_FIELD(  1, BYTES   , SINGULAR, CALLBACK, FIRST, particle_ctrl_GetSecurityKeyReply, data, data, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_SetServerAddressRequest_fields[4] = {
    PB_FIELD(  1, UENUM   , SINGULAR, STATIC  , FIRST, particle_ctrl_SetServerAddressRequest, protocol, protocol, 0),
    PB_FIELD(  2, STRING  , SINGULAR, STATIC  , OTHER, particle_ctrl_SetServerAddressRequest, address, protocol, 0),
    PB_FIELD(  3, INT32   , SINGULAR, STATIC  , OTHER, particle_ctrl_SetServerAddressRequest, port, address, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_SetServerAddressReply_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_GetServerAddressRequest_fields[2] = {
    PB_FIELD(  1, UENUM   , SINGULAR, STATIC  , FIRST, particle_ctrl_GetServerAddressRequest, protocol, protocol, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_GetServerAddressReply_fields[3] = {
    PB_FIELD(  1, STRING  , SINGULAR, CALLBACK, FIRST, particle_ctrl_GetServerAddressReply, address, address, 0),
    PB_FIELD(  2, INT32   , SINGULAR, STATIC  , OTHER, particle_ctrl_GetServerAddressReply, port, address, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_SetServerProtocolRequest_fields[2] = {
    PB_FIELD(  1, UENUM   , SINGULAR, STATIC  , FIRST, particle_ctrl_SetServerProtocolRequest, protocol, protocol, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_SetServerProtocolReply_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_GetServerProtocolRequest_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_GetServerProtocolReply_fields[2] = {
    PB_FIELD(  1, UENUM   , SINGULAR, STATIC  , FIRST, particle_ctrl_GetServerProtocolReply, protocol, protocol, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_SetSoftApSsidRequest_fields[3] = {
    PB_FIELD(  1, STRING  , SINGULAR, STATIC  , FIRST, particle_ctrl_SetSoftApSsidRequest, prefix, prefix, 0),
    PB_FIELD(  2, STRING  , SINGULAR, STATIC  , OTHER, particle_ctrl_SetSoftApSsidRequest, suffix, prefix, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_SetSoftApSsidReply_fields[1] = {
    PB_LAST_FIELD
};




/* @@protoc_insertion_point(eof) */
