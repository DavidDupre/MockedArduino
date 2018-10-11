#ifdef EMULATED

#include <unistd.h>
#include <iostream>
#include <stdint.h>

#include "mock_arduino.h"


size_t _ardcompatWrite(const char *buffer) {
    std::cout << buffer;
    return strlen(buffer);
}

_ArdcompatSerial Serial = { _ardcompatWrite };


void delay(unsigned long ms) {
    usleep(ms * 1000);
}

#endif /* EMULATED */