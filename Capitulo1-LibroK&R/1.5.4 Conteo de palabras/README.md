# **Sección 1.5.4**
---

## Ejercicio 1.11

_Los cambios realizados para este ejercicio se pueden observar accediendo a este [commit](https://github.com/jdellacasaponce/SSL/commit/5ebb0f9ccfd67baff504c717cc5266431e32b6f8)_

> Para este ejercicio, la mejor prueba que se me ocurrió fue la de leer el contenido de un archivo de texto con muchas palabras. Mediante un comando de bash, leer el archivo pasarle la salida al programa y luego grabar esa salida en otro archivo .txt, luego comparar la salida con el comando wc de bash para ver si la cantidad coincidia.

#### Los archivos utilizados son:
- `ArchivoDeLectura`: Es el archivo de texto con contenido "Lorem ipsum"

- `ConteoDePalabras_Test.sh`: Script de bash para realizar la prueba en mi linux con los comandos necesarios para ejecutar el programa y realizar la comparación.

- `ConteoDePalabras_Output.txt`: Archivo con la salida del script de prueba.

---

## Ejercicio 1.12

_Los cambios realizados para este ejercicio se pueden observar accediendo a este [commit]()_

> Para este ejercicio sólo tube que realizar la recorrida del archivo con un while, cuando la getchar() me traía un espacio, una nueva linea o una tabulación indicando que se terminó la palabra, escribo una nueva linea. Si no es ninguno de esos caracteres, escribo el char tal cual lo leo:

```C    
while ((c = getchar()) != EOF) {
                
        if (c == ' ' || c == '\n' || c == '\t') {
            putchar('\n');
        }
        else if (c != ' ' || c != '\n' || c != '\t') {
            putchar(c);
        }        
    }
```
---
\* Para este ejercicio también utilice el archivo de script para ejecutar el programa, leyendo el mismo archivo con el texto y escribiendo en la misma salida que en el ejercicio anterior.



