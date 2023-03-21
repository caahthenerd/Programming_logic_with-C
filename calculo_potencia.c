#include <stdio.h>

void main(void) {
  int valorBase = 0;
  int valorExpoente = 0;
  int total = 1;

  printf("Informe o valor do expoente: \n");
  scanf("%i", &valorExpoente);
  printf("Informe o valor da base: \n");
  scanf("%i", &valorBase);

  for (int i = 0; i < valorExpoente; i++) {
    total =  valorBase * total;  
  }
  printf("%i", total);
}