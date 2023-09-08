#include "../headers/cabecalhos.h"

void setPosicao(int *x, int *y) {
    *x = 1 + rand() % (MAX_LINHAS - 2);
    *y = 1 + rand() % (MAX_COLUNAS - 2);
}