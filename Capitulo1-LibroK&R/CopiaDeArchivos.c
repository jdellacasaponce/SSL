#include <stdio.h>

/* Copia la entrada a la salida; 2° Versión*/

int main()
{
    int c;

    
    while ( (c = getchar()) != EOF) {
        putchar(c);
    }
}