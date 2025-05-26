#include "../../biblioteca/biblioteca.h"
#include <stdio.h>
#define MAXLINE 1000

int main(void) {

  int len, max, supermaximo, i;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = supermaximo = i = len = 0;
  freopen("/home/juliand/Documentos/Github_UTN/SSL/Libro_K&R/capitulo_1/"
          "seccion_1.9/textoDePrueba",
          "r", stdin);
  freopen("textoDePrueba", "r", stdin);
  while ((len = getlinea(line, MAXLINE)) > 0) {

    if (len == MAXLINE - 1 || supermaximo > 0) {
      supermaximo = supermaximo + len;
    }

    for (i = 0; i < MAXLINE; i++) {
      if (line[i] == '\0') {
        if (supermaximo > max) {
          max = supermaximo;
          copy(longest, line);
        }
        supermaximo = 0;
      }
    }

    if (len > max && supermaximo == 0) {
      max = len;
      copy(longest, line);
    }
  }

  if (max > 0 && supermaximo == 0) {
    printf("%s%d%s\n\n", "La linea mas larga tiene una longitud de ", max,
           " y termina de la siguiente manera: ");
    printf("%s", longest);
  }

  return 0;
}
