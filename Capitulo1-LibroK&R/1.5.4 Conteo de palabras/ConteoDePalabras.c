#include <stdio.h>

#define IN 1
#define OUT 0

// cuenta lineas, palabras, y caracteres de entrada

int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        
        ++nc;
        
        if (c == '\n') {
            ++nl;
        };

        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        }
        else if (state == OUT) {
            state = IN;
            ++nw;
        }        
    }

    printf("La cantidad de Líneas leidas son: %d, La cantidad de palabras son: %d y la cantidad de caracteres: %d\n", nl, nw, nc);
}