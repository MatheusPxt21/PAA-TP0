#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LINHAS 20
#define MAX_COLUNAS 80



void desenhaBordas() {
    for (int i = 0; i < MAX_LINHAS; i++) {
        for (int j = 0; j < MAX_COLUNAS; j++) {
            if (i == 0 || i == MAX_LINHAS - 1) {
                // Primeira e última linha: imprime '-'
                printf("-");
            } else {
                if (j == 0 || j == MAX_COLUNAS - 1) {
                    // Primeira e última coluna (exceto primeira/última linha): imprime '|'
                    printf("|");
                } else {
                    // Interior do quadro: imprime espaço em branco
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}

void desenhaAsterisco() {
    printf("*");
}

void desenhaSoma() {
    printf(" * \n***\n * ");
}

void desenhaX() {
    printf("*   *\n * *\n  *  \n * *\n*   *");
}

int main() {
    srand(time(NULL));

    char opcao;
    int quantidade;

    do {
        printf("Escolha uma figura (A - Asterisco, S - Soma, X - X): ");
        scanf(" %c", &opcao);

        printf("Quantas figuras deseja no quadro? ");
        scanf("%d", &quantidade);

        for (int i = 0; i < quantidade; i++) {
            int linha, coluna;

            do {
                linha = rand() % (MAX_LINHAS - 4) + 2; // Evita as primeiras e últimas duas linhas
                coluna = rand() % (MAX_COLUNAS - 4) + 2; // Evita as primeiras e últimas duas colunas
            } while (opcao == 'A' && (coluna % 2 != 0 || linha % 2 != 0)); // Garante que o asterisco esteja em uma coluna e linha par

            switch (opcao) {
                case 'A':
                    desenhaAsterisco();
                    break;
                case 'S':
                    desenhaSoma();
                    break;
                case 'X':
                    desenhaX();
                    break;
            }
        }

        printf("\n");
        desenhaBordas();

        printf("\nDeseja fazer outro quadro? (S/N): ");
        scanf(" %c", &opcao);

    } while (opcao == 'S' || opcao == 's');

    return 0;
}