#include <stdio.h>

int main() {
  int c;
  int caracterAnterior = 32;

  while ((c = getchar()) != EOF) {
    if (c == 32 && caracterAnterior != c && caracterAnterior != 10) {
      putchar(c);
    } else if (c == 10 && caracterAnterior != c) {
      putchar(c);
    } else if (c != 9 && c != 32 && c != 10) {
      putchar(c);
    }
    caracterAnterior = c;
  }
}
