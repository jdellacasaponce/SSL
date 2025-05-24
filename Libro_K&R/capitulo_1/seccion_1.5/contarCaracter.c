#include <stdio.h>

int main() {
  int c;
  int nuevaLinea = 0;
  int espacioEnBlanco = 0;
  int tabulacion = 0;

  while ((c = getchar()) != EOF) {

    if (c == 10) {
      ++nuevaLinea;
    }
    if (c == 32) {
      ++espacioEnBlanco;
    }
    if (c == 9) {
      ++tabulacion;
    }
  }
  printf("La cantidad de caracteres de nueva línea son: %d \n", nuevaLinea);
  printf("Los espacio en blanco son: %d \n", espacioEnBlanco);
  printf("La cantidad de caracteres de tabulación son: %d \n", tabulacion);
}
