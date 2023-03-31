#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Usando função, faça um programa que implemente um jogo de Dados. O jogador lança um par de dados, obtendo um valor entre 2 e 12. Se, na primeira jogada, você tirar 7 ou 11, você ganhou. Se você tirar 2, 3 ou 12 na primeira jogada, você
perdeu. Se, na primeira jogada, você fez um 4, 5, 6, 8, 9 ou 10, este é seu "Ponto". Seu objetivo agora é continuar jogando os dados até tirar este número novamente. Você perde, no entanto, se tirar um 7 antes de tirar este Ponto novamente.
*/

int gerarNumero() {
  int n = 0;
  srand(time(NULL));
  n = rand() % 12 + 1;
  return n;
}

int verificar(int rodada, int valor) {
  // Retorna 0 para ganhou, 1 para perdeu, 2 para ganhou apenas a rodada.
  if (rodada == 1) {
    if (valor == 7 || valor == 11) {
      return 0;
    } else if (valor == 2 || valor == 3 || valor == 12) {
      return 1;
    } else {
      return 2;
    }
  } else {
    if (valor == 7) {
      return 1;
    }
    return 2;
  }
}

int main(void) {
  int numero = 0;
  int sorteado = 0;
  int rodada = 0;
  int pontos = 0;
  bool fim = false;
  printf("Bem vindo ao jogo dos dados! Você receberá um número gerado aleatoriamente de 1 a 12.\n- Caso você tire 7 ou 11 na primeira rodada, você ganha.\n- Caso você tire 2, 3 ou 12 na primeira rodada, você perde.\n- Se você tirar algum número que não seja um dos que foram citados acima você pode ir para a próxima rodada e acumula um ponto. \nSeu objetivo agora é continuar jogando os dados até tirar este número novamente.\n\nVamos começar?\n\n");
  while (!fim) {
    rodada++;
    sorteado = gerarNumero();
    int resultado = verificar(rodada, sorteado);
    switch (resultado) {
    case 0:
      printf("Que sorte você ganhou o jogo! \n");
      printf("O número sorteado foi: %i \n", sorteado);
      fim = true;
      break;
    case 1:
      printf("Que pena, você perdeu! \n");
      printf("O número sorteado foi: %i \n", sorteado);
      fim = true;
      break;
    case 2:
      pontos++;
      printf("Você ganhou a rodada de número %i.\n", rodada);
      printf("O número sorteado foi: %i \n", sorteado);
      printf("Seu total de pontos é: %i \n\n", pontos);
    }
  }
  printf("Fim de jogo.");
}