#include "../headers/cabecalhos.h"

int getQTD(){
    int qtd;
    printf("Quantos simbolos serao impressos?\n");
    scanf("%d", &qtd);
    while(qtd <= 0){
        qtd = rand() %101;
    }
    if(qtd > 100){
        qtd = 100;
    }

    return qtd;
}

void setPosicao(int *x, int *y) {
    *x = 1 + rand() % (MAX_LINHAS - 2);
    *y = 1 + rand() % (MAX_COLUNAS - 2);
}