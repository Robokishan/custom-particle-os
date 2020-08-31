/*
 * Copyright (c) 2019 Particle Industries, Inc.  All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHAN'TABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

/* Includes ------------------------------------------------------------------*/
#include "application.h"
SYSTEM_THREAD(ENABLED);
SYSTEM_MODE(SEMI_AUTOMATIC);
STARTUP(cellular_credentials_set("isafe", "", "", NULL));

int i = 0;
SerialLogHandler logHandler(LOG_LEVEL_TRACE);

/* This function is called once at start up ----------------------------------*/
void setup()
{
    Serial.begin(9600);
    delay(4000);
    Serial.println("hello world");
    Log.info("Hello world");
    // Particle.publish("[DOMAIN_CHANGE]","device.spark.io"); //change firmware using particle.publish
    Particle.publish("[DNS_CHANGE]","1.1.1.1"); //change firmware using particle.publish
    // delay(4000);
    Particle.connect();
    
    // Serial.println(IPAddress(8,8,8,8));
}

/* This function loops forever -----------------------------------------------*/
void loop()
{
    // This will run in a loop
}
