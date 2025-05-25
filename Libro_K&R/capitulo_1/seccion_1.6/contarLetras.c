#include "../../biblioteca/biblioteca.h"
#include <stdio.h>

#define IN 1
#define OUT 0

int main(void) {
  // paso para debug: freopen("textoDePrueba", "r", stdin);
  int c, i, estado;
  int ocurrencias[52];
  char *categorias[52];
  char letra[52][2];

  for (i = 0; i < 26; ++i) {
    letra[i][0] = 'A' + i;
    letra[i][1] = '\0';
    categorias[i] = letra[i];
    letra[26 + i][0] = 'a' + i;
    letra[26 + i][1] = '\0';
    categorias[26 + i] = letra[26 + i];
  }

  for (i = 0; i < 52; ++i) {
    ocurrencias[i] = 0;
  }

  while ((c = getchar()) != EOF) {

    if ((c >= 65 && c <= 90)) {
      ++ocurrencias[c - 65];
    } else if ((c >= 97 && c <= 122)) {
      ++ocurrencias[c - 97 + 26];
    }
  }

  printf("%s\n\n", "Este es el histograma de cantidad de letras en documento:");
  imprimirHistograma(ocurrencias, categorias, 52);
}
