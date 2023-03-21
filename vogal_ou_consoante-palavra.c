//Faça um programa que solicite ao usuário que insira uma palavra e, em seguida, exiba a contagem de vogais e consoantes presentes na palavra. Use um loop while para permitir que o usuário insira várias palavras e um switch case para determinar se cada letra é uma vogal ou consoante em linguagem C. Para encerrar o loop while o usuário deve digitar a palavra "sair". Segue abaixo o código para encerrar o loop.
/*if (strcmp(palavra, "sair") == 0) {
  break; 
}*/

#include <stdio.h>
#include <string.h>

void vogais_consoantes(void) {
  char palavra[50];
  int vogais = 0;
  int consoantes = 0;
  int tamanho = 0;
  int contador = 0;


  while(1){
    printf("Digite uma palavra:\n");
    scanf("%s", palavra);
    
    if(strcmp(palavra, "sair") == 0){
      break;
    }

    tamanho = strlen(palavra);
    while(contador < tamanho){
      switch(palavra[contador]){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
          vogais++;
        break;
        default:
          consoantes++;
      }
      contador++;
    }
    printf("A palavra tem %i vogais e %i consoantes \n", vogais, consoantes);
      vogais = 0;
      consoantes = 0;
      contador = 0;
  }

}