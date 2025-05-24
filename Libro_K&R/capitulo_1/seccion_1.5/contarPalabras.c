#include <stdio.h>

#define IN 1  // en una palabra
#define OUT 0 // fuera de una palabra

int main() {
  int c, nuevaLinea, nuevaPalabra, nuevoCaracter, estado;

  estado = OUT;
  nuevaLinea = nuevaPalabra = nuevoCaracter = 0;

  while ((c = getchar()) != EOF) {

    ++nuevoCaracter;
    if (c == '\n') {
      ++nuevaLinea;
    }
    if (c == 32 || c == '\n' || c == '\t') {
      estado = OUT;
    } else if (estado == OUT) {
      estado = IN;
      ++nuevaPalabra;
    }
  }

  printf("%s %d \n", "La cantidad de caracteres es:", nuevoCaracter);
  printf("%s %d \n", "La cantidad de líneas es:", nuevaLinea);
  printf("%s %d \n", "La cantidad de palabras es:", nuevaPalabra);
}
