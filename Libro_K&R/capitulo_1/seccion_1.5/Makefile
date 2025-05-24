.PHONY: all test clean

all: test clean

test: contarPalabras
	@echo "Procesando el texto de prueba.... 📃 "
	@cat ./textoDePrueba | ./contarPalabras > output.txt ;
	@echo "Se separaron las palabras del texto por linea, puede observar el resultado en 'output.txt'✅"

contarPalabras: contarPalabras.c
	@gcc contarPalabras.c -o contarPalabras

clean:
	@rm -f contarPalabras
