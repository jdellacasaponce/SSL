#include <stdio.h>

#define IN 1
#define OUT 0

// cuenta lineas, palabras, y caracteres de entrada

int main()
{
    int state, c;

    while ((c = getchar()) != EOF) {
                
        if (c == ' ' || c == '\n' || c == '\t') {
            putchar('\n');
        }
        else if (c != ' ' || c != '\n' || c != '\t') {
            putchar(c);
        }        
    }

    putchar('\n');
}