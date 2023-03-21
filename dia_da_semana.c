#include <stdio.h>

//Escreva um código que receba um número inteiro de 1 a 7 e diga o dia da semana correspondente 

void main(void) {
  int escolha = 0;
  printf("Digite um número 1 a 7 para sabe o dia da semana equivalente:\n");
  scanf("%i", &escolha);
  switch (escolha) {
  case 1:
    printf("Domingo");
    break;
  case 2:
    printf("Segunda-feira");
    break;
  case 3:
    printf("Terça-feira");
    break;
  case 4:
    printf("Quarta-feira");
    break;
  case 5:
    printf("Quinta-feira");
    break;
  case 6:
    printf("Sexta-feira");
    break;
  case 7:
    printf("Sábado");
    break;
  default:
    printf("Opção inválida");
  }
}