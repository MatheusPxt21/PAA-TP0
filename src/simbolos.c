#include "../headers/cabecalhos.h"

void desenhaAsterisco(char quadro[MAX_LINHAS][MAX_COLUNAS], int qtd)
{
    int pos[2];
    
    for (int i = 0; i < qtd; i++) {
        setPosicao(&pos[0], &pos[1]);

        while (quadro[pos[0]][pos[1]] != ' ') {
            setPosicao(&pos[0], &pos[1]);
        }
        quadro[pos[0]][pos[1]] = '*';
    }
}

void Asterisco(int qtd)
{
    char quadro[MAX_LINHAS][MAX_COLUNAS];
    int res = 1;
    
    while(res == 1){
        criaQuadro(quadro);
        desenhaAsterisco(quadro, qtd);
        imprimeQuadro(quadro);

        printf("%sQuadro criado:%s ASTERISCOS%s || %sQuantidade:%s %d%s", BLUE, YELLOW, BLACK, BLUE, YELLOW, qtd, RESET);

        printf("%s\nDeseja criar um novo quadro com %sas mesmas configuracoes%s?%s", CYAN, YELLOW, CYAN, RESET);
        printf("\n%s%s[1]%s - SIM %s%s || %s%s[2]%s - NAO%s%s  ", B_GREEN, CYAN, WHITE, RESET, BLACK, B_RED, WHITE, WHITE, RESET, RESET);
        setbuf(stdout, 0);
        scanf("%d", &res);
        setbuf(stdin, 0);
    }
    
}

void desenhaSoma(char quadro[MAX_LINHAS][MAX_COLUNAS], int qtd) {
    int pos[2];
        for (int i = 0; i < qtd; i++) {
            setPosicao(&pos[0], &pos[1]);

            while (quadro[pos[0]][pos[1]] != ' ' ||
                quadro[pos[0]-1][pos[1]] != ' ' ||
                quadro[pos[0]+1][pos[1]] != ' ' ||
                quadro[pos[0]][pos[1]-1] != ' ' ||
                quadro[pos[0]][pos[1]+1] != ' ') {
                setPosicao(&pos[0], &pos[1]);
            }
            quadro[pos[0]][pos[1]] = '*';
            quadro[pos[0]-1][pos[1]] = '*';
            quadro[pos[0]+1][pos[1]] = '*';
            quadro[pos[0]][pos[1]-1] = '*';
            quadro[pos[0]][pos[1]+1] = '*';
        }
}

void Soma(int qtd) 
{
    char quadro[MAX_LINHAS][MAX_COLUNAS];

    int res = 1;

    while(res == 1) 
    {
        criaQuadro(quadro);
        desenhaSoma(quadro, qtd);
        imprimeQuadro(quadro);

        printf("%sQuadro criado:%s SOMA%s || %sQuantidade:%s %d%s", BLUE, YELLOW, BLACK, BLUE, YELLOW, qtd, RESET);

        printf("%s\nDeseja criar um novo quadro com %sas mesmas configuracoes%s?%s", CYAN, YELLOW, CYAN, RESET);
        printf("\n%s%s[1]%s - SIM %s%s || %s%s[2]%s - NAO%s%s  ", B_GREEN, CYAN, WHITE, RESET, BLACK, B_RED, WHITE, WHITE, RESET, RESET);
        setbuf(stdout, 0);
        scanf("%d", &res);
        setbuf(stdin, 0);
    }
}

void desenhaX(char quadro[MAX_LINHAS][MAX_COLUNAS], int qtd)
{
    int pos[2];
        for (int i = 0; i < qtd; i++) {
            setPosicao(&pos[0], &pos[1]);

            while (quadro[pos[0]][pos[1]] != ' ' |
				quadro[pos[0]-1][pos[1]-1] != ' ' |
				quadro[pos[0]-1][pos[1]+1] != ' ' |
				quadro[pos[0]+1][pos[1]-1] != ' ' |
				quadro[pos[0]+1][pos[1]+1] != ' ' |
				quadro[pos[0]+1][pos[1]] != ' ' |
				quadro[pos[0]-1][pos[1]] != ' ' |
				quadro[pos[0]][pos[1]+1] != ' ' |
				quadro[pos[0]][pos[1]-1] != ' ' ) {
                setPosicao(&pos[0], &pos[1]);
            }
            quadro[pos[0]][pos[1]] = '*';
            quadro[pos[0]-1][pos[1]-1] = '*';
            quadro[pos[0]-1][pos[1]+1] = '*';
            quadro[pos[0]+1][pos[1]-1] = '*';
            quadro[pos[0]+1][pos[1]+1] = '*';
        }
}

void X(int qtd)
{
    char quadro[MAX_LINHAS][MAX_COLUNAS];

    int res = 1;

    if(qtd >= 100){
        qtd = 99;
    }

    while(res == 1) 
    {
        criaQuadro(quadro);
        desenhaX(quadro, qtd);
        imprimeQuadro(quadro);

        printf("%sQuadro criado:%s X%s || %sQuantidade:%s %d%s", BLUE, YELLOW, BLACK, BLUE, YELLOW, qtd, RESET);

        printf("%s\nDeseja criar um novo quadro com %sas mesmas configuracoes%s?%s", CYAN, YELLOW, CYAN, RESET);
        printf("\n%s%s[1]%s - SIM %s%s || %s%s[2]%s - NAO%s%s  ", B_GREEN, CYAN, WHITE, RESET, BLACK, B_RED, WHITE, WHITE, RESET, RESET);
        setbuf(stdout, 0);
        scanf("%d", &res);
        setbuf(stdin, 0);
    }
}

void Todos(int qtd)
{
    char quadro[MAX_LINHAS][MAX_COLUNAS];
    int res = 1;

    while(res == 1) 
    {   
        int aleatorio;
        criaQuadro(quadro);
        for (int i = 0; i < qtd; i++) {
            aleatorio = rand()%3;

            switch (aleatorio)
            {
            case 0:
			    desenhaAsterisco(quadro, 1);
                break;
            case 1:
                desenhaSoma(quadro, 1);
                break;
            case 2:
                desenhaX(quadro, 1);
                break;
            default:
                break;
            }

		}
        imprimeQuadro(quadro);

        printf("%sQuadro criado:%s ALEATORIO%s || %sQuantidade:%s %d%s", BLUE, YELLOW, BLACK, BLUE, YELLOW, qtd, RESET);


        printf("%s\nDeseja criar um novo quadro com %sas mesmas configuracoes%s?%s", CYAN, YELLOW, CYAN, RESET);
        printf("\n%s%s[1]%s - SIM %s%s || %s%s[2]%s - NAO%s%s  ", B_GREEN, CYAN, WHITE, RESET, BLACK, B_RED, WHITE, WHITE, RESET, RESET);
        setbuf(stdout, 0);
        scanf("%d", &res);
        setbuf(stdin, 0);
    }
}

void desenhaQuatro(char quadro[MAX_LINHAS][MAX_COLUNAS], int qtd)
{
    int pos[2];
        for (int i = 0; i < qtd; i++) {
            setPosicao(&pos[0], &pos[1]);

            while (quadro[pos[0]][pos[1]-3] != ' ' |
                quadro[pos[0]][pos[1]-2] != ' ' |
                quadro[pos[0]][pos[1]-1] != ' ' |
                quadro[pos[0]][pos[1]] != ' ' |
                quadro[pos[0]][pos[1]+1] != ' ' |
                quadro[pos[0]-1][pos[1]-3] != ' ' |
                quadro[pos[0]-2][pos[1]-2] != ' ' |
                quadro[pos[0]-2][pos[1]-1] != ' ' |
                quadro[pos[0]-1][pos[1]-1] != ' ' |
                quadro[pos[0]+1][pos[1]-1] != ' ' |

                quadro[pos[0]][pos[1]-5] != ' ' |
                quadro[pos[0]+1][pos[1]-5] != ' ' |
                quadro[pos[0]+2][pos[1]-5] != ' ' |
                quadro[pos[0]-1][pos[1]-5] != ' ' |
                quadro[pos[0]-2][pos[1]-5] != ' ' |
                quadro[pos[0]-3][pos[1]-5] != ' ' |

                quadro[pos[0]][pos[1]+1] != ' ' |
                quadro[pos[0]+1][pos[1]+1] != ' ' |
                quadro[pos[0]+2][pos[1]+1] != ' ' |
                quadro[pos[0]-1][pos[1]+1] != ' ' |
                quadro[pos[0]-2][pos[1]+1] != ' ' |
                quadro[pos[0]-3][pos[1]+1] != ' ' |

                quadro[pos[0]+2][pos[1]-4] != ' ' |
                quadro[pos[0]+2][pos[1]-3] != ' ' |
                quadro[pos[0]+2][pos[1]-2] != ' ' |
                quadro[pos[0]+2][pos[1]-1] != ' ' |
                quadro[pos[0]+2][pos[1]] != ' ' |

                quadro[pos[0]-3][pos[1]-4] != ' ' |
                quadro[pos[0]-3][pos[1]-3] != ' ' |
                quadro[pos[0]-3][pos[1]-2] != ' ' |
                quadro[pos[0]-3][pos[1]-1] != ' ' |
                quadro[pos[0]-3][pos[1]] != ' ' |

				quadro[pos[0]+1][pos[1]] != ' ' |
				quadro[pos[0]-1][pos[1]] != ' ' |
				quadro[pos[0]][pos[1]+1] != ' ' |
				quadro[pos[0]][pos[1]-1] != ' ' ) {
                setPosicao(&pos[0], &pos[1]);
            }

            quadro[pos[0]][pos[1]-4] = '-';
            quadro[pos[0]][pos[1]-3] = '-';
            quadro[pos[0]][pos[1]-2] = '-';
            quadro[pos[0]][pos[1]-1] = '-';
            quadro[pos[0]][pos[1]] = '-';
            quadro[pos[0]-1][pos[1]-3] = '/';
            quadro[pos[0]-2][pos[1]-2] = '/';
            quadro[pos[0]-2][pos[1]-1] = '|';
            quadro[pos[0]-1][pos[1]-1] = '|';
            quadro[pos[0]+1][pos[1]-1] = '|';


            quadro[pos[0]][pos[1]-5] = '|';
            quadro[pos[0]+1][pos[1]-5] = '|';
            quadro[pos[0]+2][pos[1]-5] = '+';
            quadro[pos[0]-1][pos[1]-5] = '|';
            quadro[pos[0]-2][pos[1]-5] = '|';
            quadro[pos[0]-3][pos[1]-5] = '+';

            quadro[pos[0]][pos[1]+1] = '|';
            quadro[pos[0]+1][pos[1]+1] = '|';
            quadro[pos[0]+2][pos[1]+1] = '+';
            quadro[pos[0]-1][pos[1]+1] = '|';
            quadro[pos[0]-2][pos[1]+1] = '|';
            quadro[pos[0]-3][pos[1]+1] = '+';

            quadro[pos[0]+2][pos[1]-4] = '-';
            quadro[pos[0]+2][pos[1]-3] = '-';
            quadro[pos[0]+2][pos[1]-2] = '-';
            quadro[pos[0]+2][pos[1]-1] = '-';
            quadro[pos[0]+2][pos[1]] = '-';

            quadro[pos[0]-3][pos[1]-4] = '-';
            quadro[pos[0]-3][pos[1]-3] = '-';
            quadro[pos[0]-3][pos[1]-2] = '-';
            quadro[pos[0]-3][pos[1]-1] = '-';
            quadro[pos[0]-3][pos[1]] = '-';
            
        }
}

void Quatro(int qtd)
{
    char quadro[MAX_LINHAS][MAX_COLUNAS];

    if(qtd >= 17){
        qtd = 16;
    }

    int res = 1;

    while(res == 1){
        criaQuadro(quadro);
        desenhaQuatro(quadro, qtd);
        imprimeQuadro(quadro);

        printf("%sQuadro criado:%s NUMERO QUATRO%s || %sQuantidade:%s %d%s", BLUE, YELLOW, BLACK, BLUE, YELLOW, qtd, RESET);


        printf("%s\nDeseja criar um novo quadro com %sas mesmas configuracoes%s?%s", CYAN, YELLOW, CYAN, RESET);
        printf("\n%s%s[1]%s - SIM %s%s || %s%s[2]%s - NAO%s%s  ", B_GREEN, CYAN, WHITE, RESET, BLACK, B_RED, WHITE, WHITE, RESET, RESET);
        setbuf(stdout, 0);
        scanf("%d", &res);
        setbuf(stdin, 0);
    }
}