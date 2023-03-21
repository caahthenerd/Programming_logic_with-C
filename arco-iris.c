#include <stdio.h>
#include <string.h>

void main(void) {
  char cor[20];
int a = 1;
  
  while(a == 1){
    printf("Digite uma das cores do arco-iris para verificar a cor no hexadecimal. Cores disponíveis:\nVermelho\nLaranja\nAmarelo\nVerde\nAzul\nAnil\nVioleta.\nCaso queira sair digite qualquer outra cor.\n");
    scanf("%s", cor);

    switch(strcmp(cor, "Vermelho") == 0){
      case 1:
        printf("#FF0000\n");
      break;
      case 0:
        switch(strcmp(cor, "Laranja") == 0){
          case 1:
            printf("#FF7F00\n");
          break;
          case 0:
            switch(strcmp(cor, "Amarelo") == 0){
              case 1:
                printf("#FFFF00\n");
              break;
              case 0:
                switch(strcmp(cor, "Verde") == 0){
                  case 1:
                    printf("#00FF00\n");
                  break;
                  case 0:
                    switch(strcmp(cor, "Azul") == 0){
                      case 1:
                        printf("#00FFFF\n");
                      break;
                      case 0:
                        switch(strcmp(cor, "Anil") == 0){
                          case 1: 
                            printf("#0000FF\n");
                          break;
                          case 0:
                            switch(strcmp(cor, "Violeta") == 0){
                              case 1:
                                printf("#8B00FF\n");
                              break;
                            }
                        }
                    }
                }
            }
        }
      // break;
      default:
        a = 0;
      break;
    }
  }
}
