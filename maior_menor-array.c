#include <stdio.h>

//Escreva um programa em C que solicita ao usuário que digite 10 números e armazene em um array. O programa deve então encontrar o maior e o menor número e mostrá-lo.

int main(void) {
  int num[10];

  for(int i = 0; i < 10; i++){
    printf("Informe um número:\n");
    scanf("%i", &num[i]);
  }
  int maior = num[0];
  int menor = num[0];
  for(int i = 1; i < 10; i++){
    if(num[i] > maior){
      maior = num[i];
    }
    if(num[i] < menor){
      menor = num[i];
    }
  }
  printf("Maior: %i\n", maior);
  printf("Menor: %i\n", menor);
}