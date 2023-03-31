#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Faça um programa com uma função que receba um número e retorne o caractere P se o número for positivo, N se o número for negativo e Z se for zero.

int verificarNum(int num) {
  if (num > 0) {
    printf("P");
  } else if (num < 0) {
    printf("N");
  } else if (num == 0) {
    printf("Z");
  }
  return num;
}

int main(void) {
  int n = 0;
  int valor = 0;
  srand(time(NULL)); 
  n = rand() % 5500 - 1550;
  printf("%i\n", n);
  valor = verificarNum(n);
  // printf("%i", valor);
}