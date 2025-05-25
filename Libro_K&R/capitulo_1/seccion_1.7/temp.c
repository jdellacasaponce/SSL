#include "../../biblioteca/biblioteca.h"
#include <stdio.h>

int main(void) {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20; /* tamaño del incremento */

  celsius = lower;

  printf("%8s %8s\n", "Celcius", "Farenheit");
  while (fahr <= upper) {
    fahr = celciusAFarenheit(celsius);
    printf("%8.0f %8.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
