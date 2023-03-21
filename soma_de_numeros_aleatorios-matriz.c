#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Crie um programa que receba uma matriz 3x3 com números aleatórios. Mostre a soma dos elementos da matriz.

int main(void) {
  int num[3][3];
  int i;
  int n;
  int sum = 0;

  srand(time(NULL)); 

  for (i = 0; i < 3; i++) { 
    for (n = 0; n < 3; n++) { 
      num[i][n] = rand() % 500 + 1; 
      printf("%i\n", num[i][n]); 
      sum += num[i][n];
    }
    printf("\n");
  }
  printf("A soma dos números gerados foi %i", sum); 
}