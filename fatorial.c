//Escreva um programa para encontrar o fatorial de qualquer número.
#include <stdio.h>

void main(void) {
  int num = 0;
  int total = 0;
  int fatorial = 1;
  printf("Digite um número para calcular o fatorial dele:\n");
  scanf("%i", &num);

  if(num > 0){
    for(int i = 0; i != num; i++){
      total = num - i; 
      fatorial = fatorial * total;
    }
  }
  else{
    printf("Só é possóvel decrementar valores de números naturais.");
  }
      printf("O fatorial do número escolhido é: %i", fatorial); 
}