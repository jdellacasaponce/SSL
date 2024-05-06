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
    int c;

    //Recorro el texto con un while y voy leyendo los caracteres.
    while((c = getchar()) != EOF) {
        
        //Analizo cada caso e imprimo el caracter de control
        switch(c) {            
            //tabulacion
            case '\t': 
                {
                    printf("\\t");
                    break;
                }
            //backspace
            case '\b': 
                {
                    printf("\\b");
                    break;
                }
            //backslash
            case '\\':
                {
                    printf("\\\\");
                    break;
                }
            default:
                    putchar(c);
        }
    }
}