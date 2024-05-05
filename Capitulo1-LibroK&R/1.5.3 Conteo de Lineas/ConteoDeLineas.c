#include <stdio.h>

/* Cuenta las lineas de la entrada. Version 1.0 */

int main() 
{
    int c, nl;

    nl = 0;
    while((c = getchar()) != EOF)
    
        if (c == '\n')
                
                ++nl;

    printf("%d\n", nl);
}