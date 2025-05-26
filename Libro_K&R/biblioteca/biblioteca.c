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

int getlinea(char s[], int lim) {
  int c, i, m;
  m = i = 0;
  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  if (i == lim - 1) {
    s[i] = c;
  } else {
    s[i] = '\0';
  }
  return i;
}

void copy(char to[], char from[]) {
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}
