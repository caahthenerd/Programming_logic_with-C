#include <stdio.h>

void parImpar(void) {
  int num = 0;
  printf("Informe um número:\n");
  scanf("%d", &num);
  if (num % 2 == 0) {
    printf("O número %i", num);
    printf(" é par.");
  } else {
    printf("O número %i", num);
    printf(" é ímpar.");
  }
}
