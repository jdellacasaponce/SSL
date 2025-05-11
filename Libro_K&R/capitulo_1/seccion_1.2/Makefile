.PHONY: all test clean

all: test clean

test: term
	./term > output.txt

term: term.c
	gcc term.c -o term

clean:
	rm -f term

