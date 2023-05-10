#include <stdio.h>
#include <math.h>

// Crie uma struct chamada retangulo que contem as variáveis base e altura. Em seguida crie uma funcao que receba um retangulo como parametro e calcule a area. Depois crie uma funcao que receba um retangulo como parametro e calcule o perimetro.

struct Retangulo
{
  int base;
  int altura;
};

int calculaArea(struct Retangulo area)
{
  int b = area.base;
  int h = area.altura;
  int aTotal = b*h;
  return aTotal;
}

int calcularPerimetro(struct Retangulo perimetro)
{
  int b = perimetro.base;
  int h = perimetro.altura;
  int pTotal = 2*(b + h);
  return pTotal;
}

int main(void) {
  int base;
  int altura;

  printf("Informe a base do retangulo:\n");
  scanf("%i", &base);
  printf("Informe a altura do retangulo:\n");
  scanf("%i", &altura);

  struct Retangulo valores;
  valores.base = base;
  valores.altura = altura;
  
  int areaTotal = calculaArea(valores);
  int perimetroTotal = calcularPerimetro(valores);
  
  printf("\nValor atribuído a base = %i\nValor atribuído a base = %i\nArea do retangulo = %i\nPerimetro do retangulo = %i", base, altura, areaTotal, perimetroTotal);
}