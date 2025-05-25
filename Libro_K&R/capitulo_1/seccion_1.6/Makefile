.PHONY: all test clean

all: test clean

test: contarLetras
	@echo "Procesando el texto de prueba.... 📃 "
	@cat ./textoDePrueba | ./contarLetras > output ;
	@echo "Se contaron las ocurrencias buscadas, puede observar el resultado en 'output.txt'✅"

contarLetras: contarLetras.c
	@gcc contarLetras.c ../../biblioteca/biblioteca.c -o contarLetras

clean:
	@rm -f contarLetras
