#include <stdio.h>

int main() {
  int c;
  int caracterAnterior = 32;

  while ((c = getchar()) != EOF) {

    if (c == 9) {
      printf("%s", "\\t");
    } else if (c == '\\') {
      printf("%s", "\\\\");
    } else {
      putchar(c);
    }
  }
}
