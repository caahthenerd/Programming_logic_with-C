#include <stdio.h>
#include <math.h>

// Crie uma struct chamada ponto que contem as variáveis "x" e "y". Em seguida, crie uma função que receba dois pontos como parametro e calcule a distancia entre eles.

struct Ponto
{
  float x1;
  float x2;
  float y1;
  float y2;
};

float calculaDistancia(float x1, float y1,float x2, float y2)
{
  float totalX;
  float totalY;
  totalX = (x1 - x2) * 1;
   // 23,8 = 566,44
  totalY = (y1 - y2) * 1;
    // 41,5 = 1.722,25
  float distancia = sqrt(((totalX * totalX)+(totalY * totalY)));  
  return distancia;
}

int main(void) {
  float pontoX1;
  float pontoY1;
  float pontoX2;
  float pontoY2;

  printf("Informe o valor do ponto X1:\n");
  scanf("%f", &pontoX1);
  printf("Informe o valor do ponto Y1:\n");
  scanf("%f", &pontoY1);
  printf("Informe o valor do ponto X2:\n");
  scanf("%f", &pontoX2);
  printf("Informe o valor do ponto Y2:\n");
  scanf("%f", &pontoY2);

  struct Ponto valordoPonto;
  valordoPonto.x1 = pontoX1;
  valordoPonto.y1 = pontoY1;
  valordoPonto.x2 = pontoX2;
  valordoPonto.y2 = pontoY2;

  float resultado  = calculaDistancia(valordoPonto.x1, valordoPonto.y1, valordoPonto.x2, valordoPonto.y2);
  
  printf("\nPonto X1 recebeu: %.1f\nPonto Y1 recebeu: %.1f\nPonto X2 recebeu: %.1f\nPonto Y2 recebeu: %.1f\nA distancia entre estes pontos é: %.2f ", valordoPonto.x1, valordoPonto.y1,valordoPonto.x2, valordoPonto.y2, resultado);
}