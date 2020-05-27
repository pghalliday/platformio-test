/**
 * Blink
 *
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */
#include "Arduino.h"

#ifndef APPL_NAME
#define APPL_NAME platformio-test
#endif

#ifndef VERSION
#define VERSION 0.0.0
#endif

#ifndef SERIAL_BAUDRATE
#define SERIAL_BAUDRATE 9600
#endif

#ifndef LED_BUILTIN
#define LED_BUILTIN 13
#endif

#define _STR(VAL) #VAL
#define STR(VAL) _STR(VAL)

void setup()
{
  Serial.begin(SERIAL_BAUDRATE);
  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.println(STR(APPL_NAME) " : " STR(VERSION));
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("HIGH");

  // wait for a second
  delay(1000);

  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("LOW");

   // wait for a second
  delay(1000);
}
