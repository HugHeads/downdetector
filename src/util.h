#ifndef UTIL_H
#define UTIL_H

#include <stdint.h>

uint64_t nowMs(void);

void logInfo(const char *mensaje);
void logError(const char *mensaje);

#endif
