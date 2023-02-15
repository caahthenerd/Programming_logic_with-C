// Faça um programa que receba dois valores inteiros e mostre a soma de todos os números impares existentes entre eles.

#include <stdio.h>

int somaimpar(void) {
  int int1 = 0;
  int int2 = 0;
  int somamais1 = 0;
  int totalp1 = 0;
  int somamais2 = 0;

  printf("Digite o primeiro valor:\n");
  scanf("%i", &int1);
  printf("Digite o segundo valor:\n");
  scanf("%i", &int2);
  
  if(int1 < int2){
    for (int i = int1+1; i < int2; i++) {
      if(i%2 != 0){
        somamais1 = i + somamais1;
      }
    }
    printf("%i", somamais1);
  }
  else{
      for (int i = int2+1; i < int1; i++) {
      if(i%2 != 0){
        somamais2 = i + somamais2;
      }
    }
    printf("%i", somamais2);
  }
}