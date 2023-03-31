#include <stdio.h>

// Faça um programa, com uma funçao chamada somaImposto. A função possui 2 parametros: taxaImposto e custo. taxaImposto é a quantia de imposto sobre vendas expressa em % e custo é o custo antes do imposto. A função irá alterar o valor do custo, aplicando o imposto.

float somaImposto(float taxaImposto, float custo) {
  float resultado = custo + (custo * (taxaImposto / 100));
  return resultado;
}

int main(void) {
  float valor = 0;
  float imposto = 0;
  float novoValor = 0;
  printf("Digite o custo do produto: ");
  scanf("%f", &valor);
  printf("Digite a porcentagem do imposto: ");
  scanf("%f", &imposto);
  novoValor = somaImposto(imposto, valor);
  printf("%.2f", novoValor);
}