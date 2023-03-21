#include <stdio.h>

void main(void){
  int num = 0;
  int count = 1;

  printf("Digite um número inteiro:\n");
  scanf("%i", &num);

  if(num > 0){
    while(num >= count){
      if(num % count == 0){
        printf("Os divisores são: %i\n", count);
      }
      count++;
    }
  }
  else{
    printf("Somente números positivos!");
  }
}
