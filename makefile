all:
	gcc headers/cabecalhos.h headers/cores.h src/desenhaBordas.c src/simbolos.c src/set_get.c src/Menu.c main.c

run:
	./a.out
