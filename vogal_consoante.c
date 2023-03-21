// Escreva um código que receba uma letra e determine se ela é uma vogal ou uma consoante usando um switch case.

#include <stdio.h>

void main(void) {
  char letra = 0;
  char upperA = 'A';
  char upperE = 'E';
  char upperI = 'I';
  char upperO = 'O';
  char upperU = 'U';

  printf("Digite uma letra para descobrir se é uma vogal ou uma consoante:\n");
  scanf(" %c", &letra);
  
  switch (letra) {
  case 'a':
    if (letra == 'a' || letra == upperA) {
      printf("A letra escolhida foi a letra %c, é uma vogal", letra);
    }
    break;
  case 'e':
    if (letra == 'e' || letra == upperE) {
      printf("A letra escolhida foi a letra %c, é uma vogal", letra);
    }
    break;
  case 'i':
    if (letra == 'i' || letra == upperI) {
      printf("A letra escolhida foi a letra %c, é uma vogal", letra);
    }
    break;
  case 'o':
    if (letra == 'o' || letra == upperO) {
      printf("A letra escolhida foi a letra %c, é uma vogal", letra);
    }
    break;
  case 'u':
    if (letra == 'u' || letra == upperU) {
      printf("A letra escolhida foi a letra %c, é uma vogal", letra);
    }
    break;
  default:
    printf("A letra escolhida foi %c, é uma consoante", letra);
  }
}