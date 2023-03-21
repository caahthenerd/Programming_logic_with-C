/* Suponha que um país A tem uma população de 80000 e uma taxa de crescimento
anual de 3%. E que um país B tem população de 200000 e uma taxa de crescimento
anual de 1.5%. Quantos anos levará para a população A alcançar ou ultrapassar a população do país B? */

#include <stdio.h>

void populacao(void) {
  float paisA = 80000;
  float taxaA = 1.03;
  float paisB = 200000;
  float taxaB = 1.015;
  // float crescimentoA = 0.03;
  // float crescimentoB = 0.015;
  int totalAnos = 0;

  while (paisB > paisA) {
    paisA = paisA * taxaA;
    paisB = paisB * taxaB;
    totalAnos++;
    printf("\nÍndice de crescimento país A = %f\n", paisA);
    printf("Índice de crescimento país B = %f\n", paisB);
    printf("- Ano = %i\n\n", totalAnos);
  }
  printf("Total de anos = %i\n", totalAnos);
}