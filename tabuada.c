#include <stdio.h>

void tabuada(void) {
  int numero = 0;
  // int valorNumerico = 1;
  int totalTabuada = 0;
  printf("Informe o número que você gostaria de saber a tabuada \n");
  scanf("%i", &numero);
  for (int i = 1; i <= 10; i++) {
    totalTabuada = numero * i;
    printf("%i", numero);
    printf(" x ");
    printf("%i", i);
    printf(" = ");
    printf("%i \n", totalTabuada);
  }
}