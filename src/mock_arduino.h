#ifdef EMULATED
#ifndef _ARDUINO_COMPAT_H
#define _ARDUINO_COMPAT_H


#include <stdint.h>

typedef struct {
    size_t (*write)(const char*);
} _ArdcompatSerial;

extern _ArdcompatSerial Serial;

void delay(unsigned long ms);

#endif /* _ARDUINO-COMPAT_H */
#endif /* EMULATED */
