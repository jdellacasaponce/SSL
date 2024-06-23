#include <stdio.h>

#define IN 1
#define OUT 0

/* cuenta digitos, espacios en blancos, y otros */

int main()
{
    int c, contadorDeLongitud, i;
    int longitudDePalabra[4];

    for (i = 0; i < 5; ++i)
    {

        longitudDePalabra[i] = 0;
    }

    // (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')

    contadorDeLongitud = 0;

    while ((c = getchar()) != EOF)
    {

        if ( (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ) {

            ++contadorDeLongitud;

        }

        else {

            switch(contadorDeLongitud) {

                case 0: {
                    break;
                }
                case 1:
                case 2: {
                    // Aumento el contador de palabras con longitud menor a 3
                    ++longitudDePalabra[0];
                    contadorDeLongitud = 0;
                    break;
                }
                
                case 3:
                case 4:
                case 5: {
                    // Aumento el contador de palabras con longitud de 3 a 5
                    ++longitudDePalabra[1];
                    contadorDeLongitud = 0;
                    break;
                }

                case 6:
                case 7: {
                    //Aumento el contador de palabras con longitud de 6 o 7
                    ++longitudDePalabra[2];
                    contadorDeLongitud = 0;
                    break;
                }

                case 8:
                case 9: {
                    //Aumento el contador de palabras con longitud de 8 o 9
                    ++longitudDePalabra[3];
                    contadorDeLongitud = 0;
                    break;
                }

                default: {
                    //Aumento el contador de palabras con longitud mayor a 9
                    ++longitudDePalabra[4];
                   // printf("Mayores a 9 son: %d \n", longitudDePalabra[4]);
                    contadorDeLongitud = 0;
                    break;
                }


            }
        }


    }

    for (i = 0; i < 5; ++i) {

        int j;

       // printf("El contador es %d \n", longitudDePalabra[i]);

        switch(i) {

            case 0: {
                printf("[Menores a 3]");
                break;
            }
            case 1: {
                printf("[Entre 3 a 5]");
                break;
            }
            case 2: {
                printf("[Entre 6 o 7]");
                break;
            }
            case 3: {
                printf("[Entre 8 o 9]");
                break;
            }
            case 4: {
                printf("[Mayores a 9]");
                break;
            }
        }

        for (j = 0; j < longitudDePalabra[i] ; ++j ) {
            printf("|");            
        }

        putchar('\n');
    }


}