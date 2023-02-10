//Crie um programa que receba 10 números e conte a quantidade de números pares e ímpares.

#include <stdio.h>

void parImparFor(void) {
  int num = 0;
  int par = 0;
  int impar = 0;
  for(int i = 1; i <= 10; i++){
    printf("Digite um número aleatório:\n");
    scanf("%i", &num);
    if(num%2 == 0){
      par++;
    }
    else{
      impar++;
    }
  }
  printf("Dos números digitados, %i são pares e %i ímpares.", par, impar);
}