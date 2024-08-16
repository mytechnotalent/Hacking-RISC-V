#include <Arduino.h>

// Declare the function implemented in assembly
extern "C" void hello_world();

void setup() {
    Serial.begin(115200);
    hello_world();  // Call the assembly function directly
}

void loop() {
}
