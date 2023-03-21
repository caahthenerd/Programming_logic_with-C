#include <stdio.h>
#include <string.h>

//Escreva um programa que solicita o usuário que digite uma palavra e armazene cada caractere da palavra num array. O programa deve inverter a palavra e depois mostrá-la

int main(void) {
  char palavra[15];

  printf("Digite uma palavra: ");
  scanf("%s", palavra);

  int tamanho = strlen(palavra);
  int ultimo = tamanho - 1;
  for(int i = 0; i < tamanho/2; i++){
    int aux = palavra[i];
    palavra[i] = palavra[ultimo-i];
    palavra[ultimo-i] = aux;
  } 
    printf("%s ", palavra);
}
