
.PHONY: all test clean

all: test clean

test: hola
	./hola > output.txt

hola: hola.c
	gcc hola.c -o hola

clean:
	rm -f hola

