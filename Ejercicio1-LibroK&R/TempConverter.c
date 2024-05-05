#include <stdio.h>

/*imprime la tabla Fahrenheut-Celsius
    para fahr= 0, 20, ...., 300; version de punto flotante */

main () 
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;          /* límite inferior de la tabla de temperaturas */
    upper = 300;        /* límite superior */
    step = 20;          /* tamaño del incremento */ 

    //Imprimo encabezados
    printf("%3s %6s\n", "Celsius", "Farenheit");

    //Imprimo tabla
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}