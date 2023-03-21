// Numa eleição existem 3 candidatos. Faça um sistem a que peça o número total de eleitores que irão votar. Peça para cada eleitor votar e no final mostre o número de votos de cada candidato que venceu a eleição, caso haja empate entre 2 candidatos, informe que eles irão para o segundo turno.

#include <stdio.h>

void main(void) {
  int totalEleitores = 0;
  int numCandidato = 0;
  int voto1 = 0;
  int voto2 = 0;
  int voto3 = 0;
  printf("Informe o total de eleitores:\n");
  scanf("%i", &totalEleitores);

  for (int i = 1; i <= totalEleitores; i++) {
    printf("Digite 1 para votar no Walter White, 2 para votar no Barry Allen ou 3 para votar no Sheldon Cooper?\n");
    scanf("%i", &numCandidato);
    if (numCandidato == 1) {
      voto1++;
    } else if (numCandidato == 2) {
      voto2++;
    } else if (numCandidato == 3) {
      voto3++;
    } else {
      printf("\nOpção iválida. Voto não computado\n\n");
    }
  }
  printf("O candidato Walter White teve %i", voto1);
  printf(" votos.\n");
  printf("O candidato Barry Allen teve %i", voto2);
  printf(" votos.\n");
  printf("O candidato Sheldon Cooper teve %i", voto3);
  printf(" votos.\n");

  if (voto1 == voto2 && voto2 == voto3 && voto1 == voto3) {
    printf("Houve um empate entre três os candidatos.\n Será realizada uma nova eleição.");
  } else if (voto1 == voto2) {
    printf("Houve um empate entre os candidatos  Walter White e Barry Allen.\n Haverá um segundo turno.");
  } else if (voto2 == voto3) {
    printf("Houve um empate entre os candidatos Barry Allen e Barry Allen.\n Haverá um segundo turno");
  } else if (voto1 == voto3) {
    printf("Houve um empate entre os candidatos Walter White e Sheldon Cooper.\n Haverá um segundo turno");
  } else {
    printf("\nO candidato com mais votos é o vencedor. Parabéns!");
  }
}