#include <stdio.h>
//Desenvolva um programa para dizer o maior e o menor de n números inteiros 
//inseridos pelo usuário que estejam no intervalo entre 0 e 999999. 
//Digite -1 para terminar.

void main(void) {
	int num = 0;
	int maior = 0;
	int menor = 999999;
	while(num != -1){
		printf("Digite um numero entre 0 e 999999.\nDigite -1 para encerrar\n");
		scanf("%i", &num); //num = 3
		if(num > maior && num <= 999999){
			maior = num; //maior = 7
		}
		if(num < menor && num >= 0){
			menor = num; //menor = 3
		}
	}
	printf("O maior número é %i\n", maior);
	printf("O menor número é %i", menor);
}
