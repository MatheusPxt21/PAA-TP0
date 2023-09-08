#include "../headers/cabecalhos.h"

void Menu(){

    int figura, qnt, resposta;

    while(resposta == 0){

        printf("\n\tGERADOR DE OBRA DE ARTE:");
        printf("\n\t===================================================");
        printf("\n\t|| Escolha a figura que deseja ver representada: ||");
        printf("\n\t|| 1 - Asterisco simples                         ||");
        printf("\n\t|| 2 - Síbolo de soma composto por asteriscos    ||");
        printf("\n\t|| 3 - Letra X feita com asteriscos              ||");
        printf("\n\t|| 4 - Figuras aleatorias                        ||");
        printf("\n\t|| 5 ou outro valor - ...                        ||");
        printf("\n\t===================================================");
        printf("\n\t INSIRA O NÚMERO DA FIGURA ESCOLHIDA: ");
        scanf("%d", &figura);
        setbuf(stdin, 0);
        printf("\n\t INSIRA A QUANTIDADE DE FIGURAS\n\t(menor ou igual a zero para aleatório): ");
        scanf("%d", &qnt);
        setbuf(stdin, 0);



    }
}