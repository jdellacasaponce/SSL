#include <stdio.h>

int main() {
  int c;

  while ((c = getchar()) != EOF) {

    if (c == 32 || c == 10 || c == 9) {
      putchar('\n');
    } else {
      putchar(c);
    }
  }
}
