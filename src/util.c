#include "util.h"
#include <stdint.h>
#include <stdio.h>
#include <sys/time.h>
#include <time.h>

uint64_t nowMs(void) {
  struct timeval now;
  gettimeofday(&now, NULL);
  return (uint64_t)now.tv_sec * 1000 + (uint64_t)now.tv_usec / 1000;
}

void logInfo(const char *mensaje) {
  printf("[%llu] Info: %s\n", (unsigned long long)nowMs(), mensaje);
}

void logError(const char *mensaje) {
  fprintf(stderr, "[%llu] Error: %s\n", (unsigned long long)nowMs(), mensaje);
}
