// Escreva um código que apresente um menu com opções de conversão de medidas (metro para quilômetro, quilômetro para metro, metro para centimetro e centimetro para metro) e solicite que o usuário selecione a opção desejada. Realize a conversão escolhida pelo usuário e imprima o resultado.

#include <stdio.h>

void main(void) {
  // int num = 0;
  int opc = 0;
  double numConv = 0;

  printf("Digite o numero que deseja fazer a conversão de medida:\n");
  scanf("%lf", &numConv);
  printf("Caso queira converter de metro(m) para quilômetro(km) digite 1\nCaso queira converter quilômetro(km) para metro(m) digite 2\nCaso queira converter metro(m) para centimetro(cm) digite 3\nCaso queira converter centimetro(cm) para metro(m) digite 4\n");
  scanf("%i", &opc);
  
  switch (opc) {
  case 1:
    numConv = numConv/1000;
    printf("Convertendo de m para km deu %.3lf km", numConv);
    break;
  case 2:
    numConv = numConv * 1000;
    printf("Convertendo de km para m deu %.3lf km", numConv);
    break;
  case 3:
    numConv = numConv * 100;
    printf("Convertendo de m para m deu %.3lf cm", numConv);
    break;
  case 4:
    numConv = numConv / 100;
    printf("Convertendo de cm para m deu %.3lf m", numConv);
    break;
  default:
    printf("Nenhuma opção válida foi escolhida.");
  }
}