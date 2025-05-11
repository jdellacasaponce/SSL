#include <stdio.h>

/* Imprime la tabla Farenheit-Celcius
 * para fahr = 0,20,...,300 */

int main(void) {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20; /* tamaño del incremento */

  celsius = lower;

  printf("%8s %8s\n", "Celcius", "Farenheit");
  while (fahr <= upper) {
    fahr = ((9.0 / 5.0) * celsius) + 32.0;
    printf("%8.0f %8.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
