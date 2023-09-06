all:
	gcc headers/cabecalhos.h src/desenhaBordas.c main.c src/simbolos.c src/set_get.c 

run:
	./a.out
