// Faça um programa que mostre a soma de todos os números ímpares que são múltiplos de três e que estão entre 1 e 500.

#include <stdio.h>

int main(void) {
  int num = 0;

  for(int i = 0; i < 500; i++ ){
    if(i%2 != 0 && i%3 == 0){
      num = num + i;
    }
  }
      printf("%i", num);
}
