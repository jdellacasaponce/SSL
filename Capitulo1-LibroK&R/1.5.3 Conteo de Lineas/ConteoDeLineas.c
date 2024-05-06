#include <stdio.h>

/*  
    Cuenta las lineas de la entrada. Version 2.0 
    Se le pasa el archivo: "ArchivoDeLectura" por linea de comandos
    para que el programa procese el texto ( cat ArchivoDeLectura | ./ConteoDeLineas.out )
    y se guarda la salida en el archivo ConteoDeLineas_Output.txt
*/

int main() 
{
    //Declaro variables
    int c, aux;

    //Imprimo la primera variable si no es un espacio, o si no es un archivo vacío.
    if ( (c = getchar()) != ' ' && c != EOF) {
        putchar(c);
    }

    //Para evitar escribir dos espacios vacíos seguidos, la variable auxiliar almacena el caracter anterior.
    aux = c;

    //Recorro el texto con un while y voy leyendo los caracteres.
    while((c = getchar()) != EOF) {
        
        //si el caracter anterior es un espacio y el caracter actual no lo es, imprime el espacio y el caracter
        if ( c != ' ' && aux == ' ') {

            putchar(aux);
            putchar(c);
        }

        //si el caracter anterior anterior no es un espacio, solo imprime el caracter actual
        if ( c != ' ' && aux != ' ') {
            putchar(c);
        }
        
        aux = c;    
    }
}