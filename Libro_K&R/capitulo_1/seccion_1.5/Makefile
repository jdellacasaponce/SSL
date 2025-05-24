.PHONY: all test clean

all: test clean

test: validar
	echo "El valor de EOF es:" $$(echo "c" | ./validar ) > output.txt ;

validar: validar.c
	gcc validar.c -o validar

clean:
	rm -f validar
