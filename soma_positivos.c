//Faça um programa que leia 20 números inteiros e mostre a soma dos números positivos.

#include <stdio.h>

void main(void) {
  int num = 0;
  int soma = 0;

  for(int i = 0; i < 20; i++){
    printf("Digite um número: \n");
    scanf("%i", &num);
    if(num > 0){
      soma = num + soma;
    }
    else{
      printf("\n\nO número digitado não é um valor positivo\n\n");
    }
  }
  printf("A soma dos valores positivos digitados foi: %i", soma);
}
