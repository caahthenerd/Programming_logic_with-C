#include <stdio.h>

void main(void) {
  float num1 = 0;
  float num2 = 0;
  int opc = 0;
  float result = 0;

  printf("Digite o primeiro número:\n");
  scanf("%f", &num1);
  printf("Digite o segundo número:\n");
  scanf("%f", &num2);
  printf("Qual calculo você gostaria de realizar?\nDigite 1 para soma, 2 para subtração, 3 para multiplicação e 4 para divisão\n");
  scanf("%i", &opc);
  
  switch (opc) {
  case 1:
    result = num1 + num2;
    printf("Somando os números escolhidos o resultado foi: %f", result);
    break;
  case 2:
    result = num1 - num2;
    printf("Subtraindo os números escolhidos o resultado foi: %f", result);
    break;
  case 3:
    result = num1 * num2;
    printf("Multiplicando os números escolhidos o resultado foi: %f", result);
    break;
  case 4:
    result = num1 / num2;
    printf("Dividindo os números escolhidos o resultado foi: %f", result);
    break;
  default:
    printf("Nenhuma opção válida foi escolhida.");
  }
}