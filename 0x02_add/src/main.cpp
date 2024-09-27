#include <Arduino.h>

// Declare the function implemented in assembly
extern "C" void add();

void setup() {
    Serial.begin(115200);
    add();  // Call the assembly function directly
}

void loop() {
}
