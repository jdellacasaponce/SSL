#!/bin/bash

#Este es un script para realizar la prueba del programa, haciendo una comparación con la función de word count.
#Primero leo un archivo de texto con muchas palabras y guardo la salida en otro archivo de texto:

./ConteoDePalabras.out < ArchivoDeLectura > ConteoDePalabras_Output.txt

#Luego comparo la salida con la funcion de word count (wc -w) que poseo en Linux.