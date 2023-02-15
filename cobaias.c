#include <stdio.h>

int cobaias(void) {
  int cob1 = 0;
  int cob2 = 0;
  int cob3 = 0;
  int cobtotal = 0;
  
  int tipocob = 0;
  char sapo = 1;
  char rato = 2;
  char coelho = 3;

  int somacob1 = 0;
  int somacob2 = 0;
  int somacob3 = 0;
  int totalsoma = 0;

  
  printf("Digite quantas cobaias foram por ano\n");
  scanf("%i", &cobtotal);
    for(int i = 0; i < cobtotal; i++){
      printf("Digite 1 para cobaia sapo.\nDigite 2 para cobaia rato. \nDigite 3 para cobaia coelho.\n");  
      scanf("%i", &tipocob);
      if (tipocob == 1) {
        sapo++;
        printf("Quantas cobaias do tipo sapo fora utilizadas:\n");
        scanf("%i", &cob1);
        somacob1 = cob1 + somacob1;
      } else if (tipocob == 2) {
        rato++;
        printf("Quantas cobaias do tipo rato fora utilizadas:\n");
        scanf("%i", &cob2);
        somacob2 = cob2 + somacob2;
      } else if (tipocob == 3) {
        coelho++;
        printf("Quantas cobaias do tipo coelho fora utilizadas:\n");
        scanf("%i", &cob3);
        somacob3 = cob3 + somacob3;
      } else {
        printf("\nOpção iválida.\n\n");
      }
  }
    totalsoma = somacob1 + somacob2 + somacob3;
  printf("Cobaias sapo: %i\n", somacob1);
  printf("Cobaias rato: %i\n", somacob2);
  printf("Cobaias coelho: %i\n", somacob3);
  printf("Tota de cobaias: %i\n", totalsoma);
}