#include "headers/cabecalhos.h"

int main() {

  srand(time(NULL));

  int res = 1;

  while(res == 1){

    Menu();
    
    printf("%sDeseja voltar ao Menu?%s", RED, RESET);
    printf("\n%s%s[1]%s - SIM %s%s || %s%s[2]%s - NAO%s%s  ", B_GREEN, CYAN, WHITE, RESET, BLACK, B_RED, WHITE, WHITE, RESET, RESET);
    setbuf(stdout, 0);
    scanf("%d", &res);
    setbuf(stdin, 0);
  } 

  return 0;
}

