#include <stdio.h>

void main(void) {
  int qtdPessoas = 0;
  int idade = 0;
  int mediaIdade = 0;
  int totalMedia = 0;
  printf("Quantas pessoas tem na turma?\n");
  scanf("%i", &qtdPessoas);
  for (int i = 1; i <= qtdPessoas; i++) {
    printf("Qual a sua idade?\n");
    scanf("%i", &idade);
    mediaIdade = mediaIdade + idade;
  }
  totalMedia = mediaIdade/qtdPessoas;  if(totalMedia <= 25){
    printf("A média da turma é de %i", totalMedia);
    printf(" anos. A turma é jovem.");
  }
  else if(totalMedia >= 26 && totalMedia <= 60){
    printf("A média da turma é de %i", totalMedia);
    printf(" anos. A turma é adulta.");
  }
  else{
    printf("A média da turma é de %i", totalMedia);
    printf(" anos. A turma é idosa.");
  }
}