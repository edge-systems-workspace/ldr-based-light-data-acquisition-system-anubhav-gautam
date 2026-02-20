#include <Arduino.h>

#define LDR_PIN A0
/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author ANUBHAV GAUTAM
 * @date 2026-01-15
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */


void setup() {
    Serial.begin(9600);
    while (!Serial);
}

void loop() {

    // TODO 5:
    // Read analog value from LDR

    // TODO 6:
    // Print raw ADC value

    // TODO 7:
    // Apply threshold logic (Bright / Dark detection)

    // TODO 8:
    // Print brightness status

    // TODO 9:
    // Add delay (500ms or 1 second)
}
