#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void) {
  float temp[12];
  float soma = 0;
  float media = 0;
  int i = 0;
  int n = 0 ;
  char* meses[] ={"janeiro","fevereiro","março","abril","maio","junho","julho","agosto","setembro","outubro","novembro","dezembro"};
  srand(time(NULL));

  for(i = 0; i < 12; i++){
    temp[i] = rand() % 60 + 1;
    // printf("%.1f\n", temp[i]);
    soma += temp[i];
    // printf("%.2f\n", soma);
  }
  printf("A média anual das temperaturas foi de: %.1f°C graus \n \n", (soma/12));
  for(n = 0; n < 12; n++){
    printf("\nA temperatura média de %s foi de %.1f°C graus.", meses[n], temp[n]);
  }
}