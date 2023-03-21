#include <stdio.h>

void main(void) {
  int escolha = 0;
  printf("Digite 1 para pão de sal \nDigite 2 para pão de leite \nDigite 3 "
         "para pão de milho \nDigite 4 para pão de quejo\n");
  scanf("%i", &escolha);
  switch (escolha) {
  case 1:
    printf("Pão de sal custa R$ 0,50");
    break;
  case 2:
    printf("Pão de leite custa R$ 0,40");
    break;
  case 3:
    printf("Pão de milho custa R$ 0,60");
    break;
  case 4:
    printf("Pão de queijo custa R$ 0,80");
    break;
  default:
    printf("Opção inválida");
  }
}