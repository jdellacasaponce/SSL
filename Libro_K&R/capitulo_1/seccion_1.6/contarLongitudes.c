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
    printf("%3d%s", i, "| ");

    for (int j = 0; j < tamaño; ++j) {
      if (array[j] >= i) {
        printf("%3s", "--- ");
      } else {
        printf("%3s", "    ");
      }
    }
    putchar('\n');
  }

  printf("%s", "   |");
  for (int i = 0; i < tamaño; ++i) {
    printf("%s", "----");
  }

  putchar('\n');
  printf("%5s", " ");
  for (int i = 0; i < tamaño; ++i) {
    char *prueba = categorias[i];
    printf("%3s", categorias[i]);
  }
}

#define IN 1
#define OUT 0

int main(void) {
  // paso para debug: freopen("textoDePrueba", "r", stdin);
  int c, i, estado, contarPalabra;
  int ocurrencias[6];
  char *categorias[] = {"<03 ", "<06 ", "<09 ", "<12 ", "<15 ", ">15 "};
  contarPalabra = 0;
  for (i = 0; i < 6; i++) {
    ocurrencias[i] = 0;
  }

  c = getchar();

  while ((c = getchar()) != EOF) {

    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
      estado = IN;
      ++contarPalabra;
    } else {
      estado = OUT;
      if (contarPalabra < 3) {
        ocurrencias[0]++;
      } else if (3 < contarPalabra && contarPalabra < 6) {
        ocurrencias[1]++;
      } else if (6 < contarPalabra && contarPalabra < 9) {
        ocurrencias[2]++;
      } else if (9 < contarPalabra && contarPalabra < 12) {
        ocurrencias[3]++;
      } else if (12 < contarPalabra && contarPalabra < 15) {
        ocurrencias[4]++;
      } else if (contarPalabra > 15) {
        ocurrencias[5]++;
      }
      contarPalabra = 0;
    }
  }

  printf("%s\n\n",
         "Este es el histograma de cantidad de ocurrencias del documento:");
  imprimirHistograma(ocurrencias, categorias, 6);
}
