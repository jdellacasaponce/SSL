.PHONY: all test clean

all: test clean

test: longLinea
	./longLinea > output ;
longLinea: longLinea.c
	@gcc longLinea.c ../../biblioteca/biblioteca.c -o longLinea

clean:
	@rm -f longLinea
