#include <stdio.h>

int main()
{
    int c;
    int verificacion;

    while ((verificacion = ((c = getchar()) != EOF)) != 0)
    {

        printf("\n La expresión \"getchar() != EOF\" es igual a: %d\n", verificacion);

        putchar(c);
    }

    printf("\n La expresión \"getchar() != EOF\" es igual a: %d\n", verificacion);
    
    printf("\n El Valor de EOF es: %d\n", c);
}