#include "util.h"
#include <stdint.h>
#include <stdio.h>
#include <unistd.h>

int main(void) {
  logInfo("Inicio del programa");
  uint64_t inicio = nowMs();
  sleep(1);
  uint64_t fin = nowMs();
  uint64_t dif = fin - inicio;
  printf("Tiempo transcurrido durante sleep(1) ha sido: %llu ms\n",
         (unsigned long long)dif);
  if (dif >= 1000 && dif <= 1050) {
    logInfo("Todo ha salido bien");
  } else {
    logError("Nos hemos ido a la mierda");
  }
  return 0;
}
