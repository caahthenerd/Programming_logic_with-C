// #include <stdio.h>
/*A lanchonete do Jailson Mendes solicitou que você desenvolva um programa. Usando while e switch case faça um cardápio digital que permita ao usuário escolher quais opções de lanche ele deseja, mostrando-as juntamente com seu respectivo preço: Coxinha: 3.00, Pastel: 3.00, Panqueca: 4.00, Lasanha:
5,00. Após escolher os lanches que deseja, o programa deve permitir que o usuário escolha dentre as opções de bebida desejadas: Cerveja: 3.50, Refrigerante: 4.00, Água Mineral: 3.00, Suco de Laranja: 4.50. Após escolher as bebidas que deseja, o programa deve mostrar quanto deu a conta,
incluindo os 10% da gorjeta do garçom. Use um loop while para permitir que o usuário escolha quantos lanches e bebidas desejar e use switch case para determinar quais os lanches e bebidas escolhidos.*/

// int main(void){
//   // int i = 0;
//   int escolha = 0;
//   int opcoeslanche = 0;
//   float total1 = 0;
//   float total2 = 0;
//   int sair = 1;
  
  

//   while(sair == 1){
//     printf("bem vindo ao nosso cardapio digital, digite \n1 - coxinha, digite \n2 - para pastel,digite\n3 paqueca, digite\n4 para lasanha ");
//     switch(opcoeslanche){
//       case 1:
      
//     }
//   }
// }

#include <stdio.h>
#include <string.h>

void main(void){
  int num = 0;
  int limit = 0;
  char operacao;
  int result = 0;

  while(1){
    printf("Digite um número inteiro positivo para saber a tabuada:\n");
    scanf("%i", &num);
        if(num < 0){
      break;
    }
    printf("\nDigite o tipo de operação que deseja realizar( + , - , *, /):");
    scanf(" %c", &operacao);
    printf("\nDigite um número limite para fazer o calculo:\n");
    scanf("%i", &limit);

    for(int count = 1; count <= limit; count++){
      // printf("%i", count);      
      switch(operacao){
        case '+':
          result = num + count;
          printf("%i + %i = %i\n", num,count,result);
        break;
        case '-':
          result = num - count;
          printf("%i - %i = %i\n", num,count,result);
        break;
        case '*':
          result = num * count;
          printf("%i * %i = %i\n", num,count,result);
        break;
        case '/':
          result = count * num;
          printf("%i / %i = %i\n",result, num,count);
        break;
        default:
        printf("Esta operação não existe");
      }
    }
    num = 0;
    limit = 0;
    result = 0;
    
  }
}