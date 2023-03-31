#include <stdio.h>

/*
Faça um programa que use a função valorPagamento para determinar o valor a ser
pago por uma prestação de uma conta. O programa deverá solicitar ao usuário o
valor da prestação e o número de dias em atraso e passar estes valores para a
função valorPagamento, que calculará o valor a ser pago e devolverá este valor
ao programa que a chamou. O programa deverá então exibir o valor a ser pago na
tela. Após a execução o programa deverá voltar a pedir outro valor de prestação e assim continuar até que seja informado um valor igual a zero para a prestação. Neste momento o programa deverá ser encerrado. O cálculo do valor a ser pago é feito da seguinte forma. Para pagamentos sem atraso, cobrar o valor da prestação. Quando houver atraso, cobrar 3% de multa, mais 0,1% de juros por dia de atraso.
*/

float valorPagamento(float prestacao, int dias) {
  float calculo1 = 0;
  float calculo2 = 0;
  if (dias >= 1) {
     calculo1 = prestacao + (prestacao * 0.03);
      calculo2 = (dias * (prestacao * 0.001));
    calculo1 += calculo2;
    return calculo1;
  }
  else{
    return prestacao;
  }
}

int main(void) {
  float valorPrestacao = 1;
  int qtdDias = 0;
  float result = 0;

  while (1) {
    printf("Digite o valor da prestação: ");
    scanf("%f", &valorPrestacao);
    if (valorPrestacao ==   0) {
      printf("Calculo encerrado");
      break;
    }
    printf("Informe a quantidade de dias de atraso: ");
    scanf("%i", &qtdDias);
    result = valorPagamento(valorPrestacao, qtdDias);
    printf("Total = %.2f\n", result);
  }
}