# **Sección 1.5.3**
---

## Ejercicio 1-8

_Para ver los cambios en este punto, por favor remitirse al siguiente [commit](https://github.com/jdellacasaponce/SSL/commit/c8f82e717d2b5d61ba5d6467345b1818477c7f10)_

> En este ejercicio, utilizo un while para recorrer el archivo e ir leyendo los caracteres. Cuando encuentro el caracter que estoy buscando (espacio, tabulación o nueva línea) lo sumo a un contador para luego imprimir el resultado. Ejemplo del while en este momento:

```C
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
```
---

## Ejercicio 1-9

_Para ver los cambios en este punto, por favor remitirse al siguiente [commit](https://github.com/jdellacasaponce/SSL/commit/4c1f4565b2dda1f57d862334f772d7cd86bd4907)_

> Aquí, al recorrer el archivo, utilizo la variable auxiliar para guardar el caracter anterior. Para sólo imprimir el ultimo espacio que antecede a un caracter que no lo es. Evitando así imprimir más de un espacio. En el segundo "if", imprimo los caracteres que no han sido precedidos por un espacio. 
En conclusión, nunca escribo espacios a menos que el caracter siguiente a este no sea uno:

```C
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
```
---

## Ejercicio 1-10

_Para ver los cambios en este punto, por favor remitirse al siguiente [commit](https://github.com/jdellacasaponce/SSL/commit/ccaef30da2592c529ff5a5bfe4be15eb206776a3)_

> En este punto, simplemente realizo la misma lectura del archivo, leyendo cada caracter y cuando me encuentro con el que estoy buscando utilizo la función "printf" para imprimir la cadena que corresponde. Utilizando un switch para cada caso, pero el caso "default" es un putchar, para imprimir el mismo caracter que se leyó:

```C
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
```
---
\* Aclaración: El programa se ejecutó usando el script de bash `"ConteoDeLineas_Test.sh"` donde le paso el archivo con el texto `"ArchivoDeLectura"`. La salida de esta ejecución va a parar al arhivo `"ConteoDeLineas_Output.txt"`.