#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_COLUNAS 80
#define MAX_LINHAS 20

void imprimeQuadro(char quadro[MAX_LINHAS][MAX_COLUNAS]);
char criaQuadro();
void Menu();

void Asterisco(int qtd);
void Soma(int qtd);
void X(int qtd);
void Todos(int qtd);
void especial(int qtd);

int getQTD();
