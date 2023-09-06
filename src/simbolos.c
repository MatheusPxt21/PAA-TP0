#include "../headers/cabecalhos.h"

void Asterisco(int qtd)
{
    char quadro[MAX_LINHAS][MAX_COLUNAS];
    int pos[2];
    int res = 1;
    do{
        criaQuadro(quadro);
        for(int i = 0; i < qtd; i++){
            setPosicao(&pos[0], &pos[1]);

            while(quadro[pos[0]][pos[1]] != ' '){
                setPosicao(&pos[0], &pos[1]);
            }
            quadro[pos[0]][pos[1]] = '*';
        }
        imprimeQuadro(quadro);
    }while(res = 1);
    scanf("%d", &res);
}

void Soma(int qtd)
{

}

void X(int qtd)
{

}

void Todos(int qtd)
{

}

void especial(int qtd)
{

}