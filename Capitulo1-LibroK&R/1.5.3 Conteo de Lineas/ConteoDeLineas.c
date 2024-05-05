#include <stdio.h>

/*  
    Cuenta las lineas de la entrada. Version 2.0 
    Se le pasa el archivo: "ArchivoDeLectura" por linea de comandos
    para que el programa procese el texto ( cat ArchivoDeLectura | ./ConteoDeLineas.out )
    y se guarda la salida en el archivo ConteoDeLineas_Output.txt
*/

int main() 
{
    //Declaro variables para caracter, nueva linea, tabulaciones y espacios en blanco.
    int c, nl, tab, space;

    //Inicializo variables en 0
    nl = tab = space = 0;

    //Recorro el texto con un while y voy leyendo los caracteres.
    while((c = getchar()) != EOF) {

        //Si es una nueva linea, la agrego al contador nueva linea (nl)
        if (c == '\n')      
                ++nl;

        //Si es una tabulación, la agrego en el contador tab.
        if (c == '\t')      
                ++tab;
        
        //Si es un espacio en blanco, lo agrego al contador space.
        if (c == ' ')      
                ++space;
    }

    //Imprimo la salida, comentando el resultado de cada contador:
    printf("La cantidad de líneas en el documento son: %d\n", nl);
    printf("La cantidad de tabulaciones en el documento son: %d\n", tab);
    printf("La cantidad de espacios en el documento son: %d\n", space);
}