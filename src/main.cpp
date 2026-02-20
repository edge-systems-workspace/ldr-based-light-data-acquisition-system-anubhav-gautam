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
    int ldrRaw = analogRead(LDR_PIN);
    int lightPercent = map(ldrRaw, 0, 1023, 0, 100);
    Serial.print("LDR Raw Value: ");
    Serial.print(ldrRaw);
    Serial.print(" | Light: ");
    Serial.print(lightPercent);
    Serial.println("%");
    delay(500);

    // TODO 9:
    // Add delay (500ms or 1 second)
}
