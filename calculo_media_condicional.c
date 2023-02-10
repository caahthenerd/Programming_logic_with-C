#include <stdio.h>

void calMedia(void) {
  float nota1 = 0;
  float nota2 = 0;
  float media = 0;
  printf("Informe a primeira nota:\n");
  scanf("%f", &nota1);
  printf("Informe a segunda nota:\n");
  scanf("%f", &nota2);
  media = (nota1 + nota2) /2;
  printf("A média é: %.1f", media);
  if(media >= 7 || media == 10) {
    printf("Aprovado");
  }
  else if (media >= 5){
    printf("Recuperação");
  }
    else{
    printf("Reprovado");
  }
  }

