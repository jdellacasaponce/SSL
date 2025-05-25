#include <stdio.h>

void imprimirHistograma(int array[], char *categorias[], int tamaño) {
  // primero busco el valor mas alto en el array
  int valorAnterior = array[0];
  int valorMaximo = array[0];
  int valorActual = 0;

  for (int i = 0; i < tamaño; ++i) {
    valorActual = array[i];
    if (valorActual >= valorMaximo) {
      valorMaximo = valorActual;
    }
    valorAnterior = valorActual;
  }
  /* Imprimo el histograma */
  for (int i = valorMaximo; i > 0; --i) {
    printf("%3d%s", i, "|");

    for (int j = 0; j < tamaño; ++j) {
      if (array[j] >= i) {
        printf("%5s", " --- ");
      } else {
        printf("%5s", "     ");
      }
    }
    putchar('\n');
  }

  printf("%s", "  0|");
  for (int i = 0; i < tamaño; ++i) {
    printf("%5s", " --- ");
  }

  putchar('\n');
  printf("%s", "   |");
  for (int i = 0; i < tamaño; ++i) {
    char *prueba = categorias[i];
    printf("%s%s%s", "  ", categorias[i], "  ");
  }
}

float celciusAFarenheit(float celsius) {

  float fahr;

  fahr = ((9.0 / 5.0) * celsius) + 32.0;

  return fahr;
}

float farenheitACelcius(float fahr) {

  float celsius;

  celsius = (fahr - 32.0) * (5.0 / 9.0);

  return celsius;
}
