all:
	gcc headers/cabecalhos.h headers/cores.h src/desenhaBordas.c src/simbolos.c src/set_get.c main.c 

run:
	./a.out
