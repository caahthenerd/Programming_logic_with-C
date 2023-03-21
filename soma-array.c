//Escreva um programa que solicite 10 números ao usuário e armazene-os em um array. Depois moste a soma dos números.

#include <stdio.h>

int main(void) {
  float num[10];
  float soma = 0;

  printf("Digite 10 números:\n");
  for(int i = 0; i < 10; i++){
    scanf("%f", &num[i]);
  }
  for(int i = 0; i < 10; i++){
    soma += num[i];
    // printf("%f\n\n", soma);
  }
  printf("A soma total é: %.1f",soma);
}