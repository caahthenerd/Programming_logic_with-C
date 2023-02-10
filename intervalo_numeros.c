//Faça um programa que receba 10 números e conte quantos deles estão no intervalo [10,20] e quantos deles estão fora do intervalo, escrevendo estas informações.

#include <stdio.h>

void intervaloNumeros(void) {
  int num = 0;
  int dentroInt = 0;
  int foraInt = 0;
  for(int i = 1; i <= 10; i++){
    printf("Digite um número aleatório:\n");
    scanf("%i", &num);
    if(num >= 10 && num <=20){
      dentroInt++;
    }
    else{
      foraInt++;
    }
  }
  printf("Dos números digitados, %i estão dentro do intervalo [10,20] e %i estão fora deste intervalo.", dentroInt, foraInt);
}