#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba a temperatura média de cada mês do ano e armazene-as em um array. Após isto, calcule a média anual das temperaturas e mostre todas as temperaturas acima da média anual, e em que mês elas ocorreram (mostrar o mês por extenso: 1 – Janeiro, 2 – Fevereiro, . . . ).*/

int main(void) {
  float temp[12], sum = 0, media = 0;
  int i = 0;

  for (i = 0; i < 12; i++) {
    printf("Digite a temperatura do mês %i:\n", i + 1);
    scanf("%f", &temp[i]);
    sum += temp[i];
  }
  media = sum / 12;
  printf("Temperaturas acima da média anual (%.1fC)", media);
  for (i = 0; i < 12; i++) {
    if (temp[i] < media) {
      switch (i) {
      case 0:
        printf("Janeiro teve temperatura acima da média atual com %.1f°C",
               temp[i]);
        break;
      case 1:
        printf("Fevereiro teve temperatura acima da média atual com %.1f°C",
               temp[i]);
        break;
      case 2:
        printf("Março teve temperatura acima da média atual com %.1f°C",
               temp[i]);
        break;
      case 3:
        printf("Abril teve temperatura acima da média atual com %.1f°C",
               temp[i]);
        break;
      case 4:
        printf("Maio teve temperatura acima da média atual com %.1f°C",
               temp[i]);
        break;
      case 5:
        printf("Junho teve temperatura acima da média atual com %.1f°C",
               temp[i]);
        break;
      case 6:
        printf("Julho teve temperatura acima da média atual com %.1f°C",
               temp[i]);
        break;
      case 7:
        printf("Agosto teve temperatura acima da média atual com %.1f°C",
               temp[i]);
        break;
      case 8:
        printf("Setembro teve temperatura acima da média atual com %.1f°C",
               temp[i]);
        break;
      case 9:
        printf("Outubro teve temperatura acima da média atual com %.1f°C",
               temp[i]);
        break;
      case 10:
        printf("Novembro teve temperatura acima da média atual com %.1f°C",
               temp[i]);
        break;
      case 11:
        printf("Dezembro teve temperatura acima da média atual com %.1f°C",
               temp[i]);
        break;
      }
    }
  }
}