#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "cores.h"

#define MAX_COLUNAS 80
#define MAX_LINHAS 20

void imprimeQuadro(char quadro[MAX_LINHAS][MAX_COLUNAS]);
char criaQuadro(char quadro[MAX_LINHAS][MAX_COLUNAS]);
void Menu();

void desenhaAsterisco(char quadro[MAX_LINHAS][MAX_COLUNAS], int qtd);
void Asterisco(int qtd);
void desenhaSoma(char quadro[MAX_LINHAS][MAX_COLUNAS], int qtd);
void Soma(int qtd);
void desenhaX(char quadro[MAX_LINHAS][MAX_COLUNAS], int qtd);
void X(int qtd);
void Todos(int qtd);
void desenhaQuadro(char quadro[MAX_LINHAS][MAX_COLUNAS], int qtd);
void Quatro(int qtd);

int getQTD();
void setPosicao(int *x, int *y);

void desenhaSinalMais(char quadro[MAX_LINHAS][MAX_COLUNAS]);