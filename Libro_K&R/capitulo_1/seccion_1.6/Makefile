.PHONY: all test clean

all: test clean

test: contarLongitudes
	@echo "Procesando el texto de prueba.... 📃 "
	@cat ./textoDePrueba | ./contarLongitudes > output ;
	@echo "Se contaron las ocurrencias buscadas, puede observar el resultado en 'output.txt'✅"

contarLongitudes: contarLongitudes.c
	@gcc contarLongitudes.c -o contarLongitudes

clean:
	@rm -f contarLongitudes
