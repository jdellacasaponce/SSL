.PHONY: all test clean

all: test clean

test: temp
	./temp > output ;

temp: temp.c
	@gcc temp.c ../../biblioteca/biblioteca.c -o temp

clean:
	@rm -f temp
