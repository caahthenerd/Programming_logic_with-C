// Faça um programa que leia um conjunto de números inteiros e informe a soma
// dos números pares e a média dos números impares. Use um loop while para
// permitir que o usuário insira vários números e um switch case para
// classificar cada número como ímpar ou par.

#include <stdio.h>

void main(void) {
  int num = 0;
  int exit = -1;
  int totalPar = 0;
  int totalImpar = 0;
  int countImpar = 0;
  // int countPares = 0;
  // int resultadoIm = 0;

  while (1) {
    printf("\nDigite um número inteiro (Para sair digite um número negativo):\n");
    scanf("%i", &num);
    if (num < 0) {
      break;
    }
    switch (num % 2) {
    case 0:
      totalPar += num;
      printf("Último número par digitado: %i\n", num);
      printf("Soma dos pares digitado: %i\n", totalPar);
      break;
    case 1:
      totalImpar += num;
      countImpar++;
      printf("Último número ímpar digitado: %i\n", num);
      printf("Soma dos ímpares digitados: %i\n", totalImpar);
      printf("Contador ímpar: %i\n", countImpar);
      break;
    default:
      printf("Repetição interrompida.\n");
    }
  }
  if(countImpar != 0){
      printf("A média dos ímpares é: %i\n", totalImpar / countImpar);
  }
  printf("A soma dos pares é: %i", totalPar);
}
