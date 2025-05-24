.PHONY: all test clean

all: test clean

test: contarCaracter
	@echo "Procesando el texto de prueba.... 📃 "
	@cat ./textoDePrueba | ./contarCaracter > output.txt ;
	@echo "Se contaron los caracteres buscados en el texto de prueba, puede observar el resultado en 'output.txt'✅"

contarCaracter: contarCaracter.c
	@gcc contarCaracter.c -o contarCaracter

clean:
	@rm -f contarCaracter
