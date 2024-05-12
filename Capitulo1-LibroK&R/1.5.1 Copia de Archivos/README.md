# **Sección 1.5.1**
---

## Ejercicio 1-6

_Puede observar los cambios realizados en este punto viendo el [commit](https://github.com/jdellacasaponce/SSL/commit/6d8d4692694c747a3d7233fbb8f74a5d187425cc)_

> Para verificar que la expresion `"getchar() != EOF"` es cero o uno utilizo la variable `verificacion` para almacenar el resultado de la misma. Luego imprimo el valor de la variable con printf tanto dentro del "while" como afuera, para capturar también cuando no se cumple la condicion (Cuando tiene valor cero).

```C
    int verificacion;

    while ((verificacion = ((c = getchar()) != EOF)) != 0)
    {

        printf("\n La expresión \"getchar() != EOF\" es igual a: %d\n", verificacion);

        putchar(c);
    }

    printf("\n La expresión \"getchar() != EOF\" es igual a: %d\n", verificacion);
```
---

## Ejercicio 1-7

_Puede observar los cambios realizados en este punto viendo el [commit](https://github.com/jdellacasaponce/SSL/commit/1a675caae4a8ec5d1de0b642ffc2e87e889c6fce)_

> Para imprimir el valor de EOF, al final del programa, cuando sale del while, es por que la variable `c` ha llegado al final del archivo de lectura y por lo tanto almacena el caracter `EOF`. Solo queda imprimir el valor de `c`usando printf:

```C
printf("\n El Valor de EOF es: %d\n", c);
```
---
\* Aclaración: El programa es ejecutado en ambos ejercicios con el script de `CopiaDeArchivos_Test.sh` donde le paso el `ArchivoDeLectura` con el texto que tiene que leer. Luego, la salida es dirigida al archivo `CopiaDeArchivos_Output.txt`.