
#include <stdio.h>

void main(void) {
  int opcao = 0;
  char ligado = 'n';
  int intensidade = 0;
  char cor[20] = "Branco";
  int controle = 1;
  while(controle == 1){
    printf("Sistema de iluminação\n1- Ligar/Desligar sistema\n2- Aumentar intensidade\n3- Diminuir intensidade\n4- Alterar cor\n5- Sair\n");
  scanf("%i", &opcao);

  switch(opcao){
    case 1:
      if(ligado == 's'){
        printf("Desligando...\n");
        ligado = 'n';
      } else {
        printf("Ligando...\n");
        ligado = 's';
      }
    break;
    case 2:
    if(ligado == 's'){
        intensidade += 10;
        printf("Intensidade aumenta para %i %%\n", intensidade);
      } else {
        printf("A iluminação está desligada\n");
      }
    break;
    case 3:
    if(ligado == 's'){
        intensidade -= 10;
        printf("Intensidade diminuida para %i %%\n", intensidade);
      } else {
        printf("A iluminação está desligada\n");
      }
    break;
    case 4:
    if(ligado == 's'){
      printf("Digite para qual cor deseja alterar a iluminação\n");
      scanf("%s", cor);
      printf("Alterando cor para %s\n", cor);      
    } else {
        printf("A iluminação está desligada\n");
      }
    break;
    case 5:
      controle = 0;
    break;
    default:
    printf("Opção inválida");
  }
  }
}
