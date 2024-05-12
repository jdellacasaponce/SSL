# **Sección 1.2 y sección 1.3**

_El programa correspondiente a los ejercicios a continuación es ejecutado usando el script de prueba `"TempConverter_Test.sh"` el cual graba la salida en el archivo `"TempConverter_Output.txt"`._

## Ejercicio 1-3

> Modifiqué el programa para que muestre los encabezados, utilizando el formato de printf para darle un espacio de 3 a la primera columna y un espacio de 6 a la segunda como para que queden alineados.

```C
    //Imprimo encabezados
    printf("%3s %6s\n", "Celsius", "Farenheit");
```
---
---

## Ejercicio 1-4 y 1-5

> Acá se puede observar como modifique cambiando el cálculo, simplemente hice el despeje de la fórmula otorgada, ahora despejando la variable `"fhar"` para obtener su calculo. Luego para invertir la tabla, cambie `"upper"` por `"lower"` para invertir el orden de aparición, y le fui restando el `"step"`. Ahora la condición del while es que mientras que celsius sea mayor o igual a 0 ("lower") se ejecuta:

```C
    //Imprimo tabla de conversión de grados Celsius a grados Farenheit
    celsius = upper;
    while (celsius >= lower) {
        fahr =  celsius * (9.0/5.0) + 32.0;
        printf("%4.0f %9.0f\n", celsius, fahr);
        celsius = celsius - step;
    }
```
---

\* Aclaración: Los ejercicios 1-1 y 1-2 no los realicé por que eran muy parecidos al ejercicio 00 dictado por el profesor.