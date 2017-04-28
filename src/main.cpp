#ifndef UNIT_TEST // disable program main loop while unit testing in progress

#include <Arduino.h>
#include "Akeru.h"

Akeru akeru;

void blink_once(unsigned int delay_ms)
{
    digitalWrite(LED_BUILTIN, HIGH);
    delay(delay_ms);
    digitalWrite(LED_BUILTIN, LOW);
    delay(delay_ms);
}


void setup() {
    Serial.begin(9600);
    Serial.println("Program started!");
}

void loop() {
    Serial.print("Addition: ");
    //Serial.println(akeru.add(25, 17));
    blink_once(200);
    Serial.print("Subtraction: ");
    //Serial.println(akeru.sub(10, 3));
    blink_once(200);
    Serial.print("Multiplication: ");
    //Serial.println(akeru.mul(3, 3));
    blink_once(200);
    Serial.print("Division: ");
    //Serial.println(akeru.div(100, 3));
    blink_once(200);
}

#endif
