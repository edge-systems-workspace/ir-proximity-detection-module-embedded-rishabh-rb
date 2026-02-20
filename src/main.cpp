#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author rishabh-rb
 * @date 2026-02-20
 *
 * @details
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */

// TODO 1:
// Define IR sensor digital pin (Use pin 2)
#define IR_PIN 2

// TODO 2:
// Create variable to store sensor state
int sensorState = 0;

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4:
    // Configure IR pin as INPUT
    pinMode(IR_PIN, INPUT);

    // TODO 5:
    // Print system initialization message
    Serial.println("IR Obstacle Detection System - Initialized");
    delay(1000);
}

void loop() {

    // TODO 6:
    // Read digital value from IR sensor
    sensorState = digitalRead(IR_PIN);

    // TODO 7:
    // If obstacle detected
    if (sensorState == LOW) {   // Most IR modules give LOW when obstacle detected
        Serial.println("Obstacle Detected");
    }
    else {
        Serial.println("No Obstacle");
    }

    // TODO 8:
    // Add small delay (300ms)
    delay(300);
}