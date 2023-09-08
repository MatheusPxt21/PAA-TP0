#include "../headers/cabecalhos.h"

void Menu()
{
    int quantidade, figura;

    printf("\n\t%s          GERADOR DE OBRA DE ARTE:                 %s",B_YELLOW, RESET);
    printf("\n\t%s===================================================%s", B_YELLOW, RESET);
    printf("\n\t%s|| Escolha a figura que deseja ver representada: ||%s", B_GREEN, RESET);
    printf("\n\t|| %s1 - Asterisco simples                         %s||", CYAN, RESET);
    printf("\n\t|| %s2 - Síbolo de soma composto por asteriscos    %s||", CYAN, RESET);
    printf("\n\t|| %s3 - Letra X feita com asteriscos              %s||", CYAN, RESET);
    printf("\n\t|| %s4 - Figuras aleatorias                        %s||", CYAN, RESET);
    printf("\n\t|| %s5 ou outro valor - Numero Quatro              %s||", CYAN, RESET);
    printf("\n\t===================================================");
    printf("\n\t%s||INSIRA O NÚMERO DA FIGURA ESCOLHIDA:           ||%s",B_GREEN, RESET);
    printf("\n\t  ");
    scanf("%d", &figura);
    setbuf(stdin, 0);

    printf("\n\t%s          INSIRA A QUANTIDADE DE FIGURAS:          %s", B_YELLOW, RESET);
    printf("\n\t%s|| Atente-se aos limites de cada figura:         ||%s", B_GREEN, RESET);
    printf("\n\t|| %sAsterisco simples -------- no maximo 100      %s||", MAGENTA, RESET);
    printf("\n\t|| %sSíbolo de soma ----------- no maximo 100      %s||", MAGENTA, RESET);
    printf("\n\t|| %sLetra X ------------------ no maximo 099      %s||", MAGENTA, RESET);
    printf("\n\t|| %sFiguras aleatorias ------- no maximo 100      %s||", MAGENTA, RESET);
    printf("\n\t|| %sNumero Quatro ------------ no maximo 016      %s||", MAGENTA, RESET);
    printf("\n\t===================================================");
    printf("\n\t%s||INSIRA A QUANTIDADE ESCOLHIDA:                 ||%s",B_GREEN, RESET);
    printf("\n\t%s(menor ou igual a zero para aleatório):%s ", GREEN, RESET);
    scanf("%d", &quantidade);
    setbuf(stdin, 0);

    if(quantidade <= 0){
        quantidade = rand()%100 + 1;
    }

    switch (figura) {
        case 1:
            Asterisco(quantidade);
            break;
        case 2:
            Soma(quantidade);
            break;
        case 3:
            X(quantidade);
            break;
        case 4:
            Todos(quantidade);
            break;
        default:
            Quatro(quantidade);
            break;
    }
}