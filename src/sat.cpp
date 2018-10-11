#include <Arduino.h>
#include "mock_arduino.h"


void satSetup() {
    Serial.write("hello world\n");
}

void satLoop() {
    Serial.write("\rA B C D");
    delay(500);
    Serial.write("\r       ");
    delay(500);
}

int main() {
    satSetup();
    while (1) {
        satLoop();
    }
    return 0;
}
