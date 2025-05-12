.PHONY: all test clean

all: test clean

test: validar
	rm -f output.txt
	echo "c" | ./validar >> output.txt
	echo "1" | ./validar >> output.txt
	echo "" | ./validar >> output.txt
	echo "t" | ./validar >> output.txt
	echo "EOF" | ./validar >> output.txt
	@TOTAL=0 ; \
	for caracter in $$(cat output.txt) ; do \
		TOTAL=$$((TOTAL + caracter)) ; \
	done ; \
	if [ "$$TOTAL" -eq 5 ]; then \
	  echo "La expresion retorna 1 siemre" >> output.txt ;\
	else \
	  echo "La expresion no retorna 1 siemre" >> output.txt ;\
	fi

term: term.c
	gcc validar.c -o validar

clean:
	rm -f validar
