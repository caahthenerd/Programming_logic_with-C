#include <stdio.h>

void menorMaior(void) {
  int idade = 0;
  printf("Informe a idade:\n");
  scanf("%d", &idade);
  if(idade >= 18) {
    printf("Você tem %i", idade);
    printf(" anos de idade, logo você é maior de idade.");
  }
  else{
    printf("Você tem %i", idade);
    printf(" anos de idade, logo você é menor de idade.");
  }
}

