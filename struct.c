#include <stdio.h>
#include <string.h>

// Crie uma struct chamada aluno que contem as variáveis "nome", "idade", "nota". Em seguida, crie uma variável do tipo Aluno e atribua valores a suas subVariáveis. Por fim, exiba na tela as informações do aluno.

struct Aluno
{
  char nome[30];
  int idade;
  float nota;
};

int main(void) {
  struct Aluno dados;
  dados.idade = 12;
  dados.nota = 9.4;

  printf("%s tem %i anos e tirou %.1f em artes", strcpy(dados.nome, "Maria"), dados.idade, dados.nota);
}