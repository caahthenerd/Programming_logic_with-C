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