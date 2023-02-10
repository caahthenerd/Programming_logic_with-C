#include <stdio.h>

void main(void) {
  int anoLancamento = 0;
  float valorCarro = 0;
  float totalDesvalorizacao = 0; 
  printf("Informe o ano do carro:\n");
  scanf("%i", &anoLancamento);
  printf("Informe o valor do carro:\n");
  scanf("%f", &valorCarro);
  
  if(anoLancamento <= 2006){
   totalDesvalorizacao = valorCarro / 0.12;
    printf("Considerando que o ano do seu carro é %i", anoLancamento);
    printf(" com base no calculo de desvalorização ele custa atualmente %.3f", totalDesvalorizacao);
  }
  else{
    totalDesvalorizacao = valorCarro / 0.7;
    printf("Considerando que o ano do seu carro é %i", anoLancamento);
    printf(" com base no calculo de desvalorização ele custa atualmente %.3f", totalDesvalorizacao);
  }
}

