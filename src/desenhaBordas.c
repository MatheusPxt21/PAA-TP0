#include "../headers/cabecalhos.h"

void imprimeQuadro(char quadro[MAX_LINHAS][MAX_COLUNAS])
{
    printf("\n\n");
    for (int i = 0; i < MAX_LINHAS; i++) {
        for (int j = 0; j < MAX_COLUNAS; j++) {
            if (quadro[i][j] == '\0') {
                break;
            }
            printf("%s%c%s", CYAN, quadro[i][j], RESET);
        }
        printf("\n");
    }
    //printf("\n\n");
}

char criaQuadro(char quadro[MAX_LINHAS][MAX_COLUNAS])
{
    for(int i = 0; i < MAX_COLUNAS; i++){
        quadro[0][i] = '-';
        quadro[MAX_LINHAS-1][i] = '-';
    }
    for(int j = 0; j < MAX_LINHAS; j++){
        quadro[j][0] = '|';
        quadro[j][MAX_COLUNAS-1] = '|';
    }
    for(int i = 1; i < MAX_LINHAS-1; i++){
        for(int j = 1; j < MAX_COLUNAS-1; j++){
            quadro[i][j] = ' ';
        }
    }

    return quadro[MAX_LINHAS][MAX_COLUNAS];
}

