#include <stdio.h>

void main(void) {
  float nota = 0;
  float soma = 0;
  float media = 0;
  for (int i = 0; i < 4; i++) {
    printf("Digite a nota do aluno: \n");
    scanf("%f", &nota);
    soma = soma + nota;
  }
  media = soma / 4;
  printf("A média foi: %.1f", media);
}