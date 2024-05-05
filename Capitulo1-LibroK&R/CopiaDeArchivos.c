#include <stdio.h>

/* Copia la entrada a la salida; 3° Versión : Se le pasa el archivo: "ArchivoDeLectura"
 por linea de comandos para que el programa procese sus caracteres ( cat ArchivoDeLectura | ./CopiaDeArchivos.out )
 y se guarda la salida en el archivo CopiaDeArchivos_Output.txt */

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