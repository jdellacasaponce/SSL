#include <stdio.h>

/* Imprime la tabla Farenheit-Celcius
 * para fahr = 0,20,...,300 */

int main(void) {
  float fahr, celsius;
  int lower, upper, step;

  step = 20; /* tamaño del incremento */

  fahr = lower;

  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%8s %8s", "Celcius", "Farenheit");
    printf("%8.0f %8.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
