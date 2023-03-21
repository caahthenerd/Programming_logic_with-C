/* Desenvolva um programa pra calcular a soma e a média de n números inteiros inseridos pelo usuário. Digite 0 para terminar */

#include <stdio.h>

void mediaWhile(void) {
  int n = 1;
  int somados = 0;
  int qtd = 0;
  float media = 0;

  while(n != 0) {
    printf("Digite um número(caso queira parar o cálculo digite 0):\n");
    scanf("%i", &n);
    somados = somados + n;
    qtd++;
  }
  media = somados / (qtd - 1);

  printf("\nTotal da soma = %i\n",somados);
  printf("Quantidade de números digitados = %i\n",qtd);
  printf("Média = %.1f\n",media);
}