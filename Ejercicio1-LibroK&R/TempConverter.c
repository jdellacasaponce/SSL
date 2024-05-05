#include <stdio.h>

/*imprime la tabla Fahrenheut-Celsius
    para fahr= 0, 20, ...., 300; version de punto flotante */

int main () 
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;          /* límite inferior de la tabla de temperaturas */
    upper = 45;        /* límite superior */
    step = 5;          /* tamaño del incremento */ 

    //Imprimo encabezados
    printf("%3s %6s\n", "Celsius", "Farenheit");

    //Imprimo tabla de conversión de grados Celsius a grados Farenheit
    celsius = upper;
    while (celsius >= lower) {
        fahr =  celsius * (9.0/5.0) + 32.0;
        printf("%4.0f %9.0f\n", celsius, fahr);
        celsius = celsius - step;
    }
}