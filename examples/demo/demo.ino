/*
 * Example program for ELT S300 I2C
 * Version: 1.00
 * -*- C -*-
 */

#include "s300i2c.h"
#include <Wire.h>

S300I2C s3(Wire);

void setup() {
  Serial.begin(115200);
  Wire.begin();
  s3.begin(S300I2C_ADDR);
  delay(10000); // 10sec wait.
  Serial.println("START S300I2C");
}

void loop() {
  unsigned int co2;
  co2 = s3.getCO2ppm();
  Serial.print("CO2=");
  Serial.println(co2);
  delay(30000); // 30sec wait
}

