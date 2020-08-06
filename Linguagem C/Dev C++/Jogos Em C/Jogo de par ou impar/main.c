#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int jogador;
	int valor;
	int total;
	int pc;
	int vitoriaJog = 0;
	int vitoriaPc = 0;
	int partidas;
	
	do{
		
	printf("\nEscolha uma opcao:\n");

	printf("\n1 - Par\n");
	printf("2 - Impar\n");
	printf("3 - SAIR DO JOGO\n");
	
	printf("\nSua opcao: ");
	scanf("%d", &jogador);
	
	if(jogador == 3){
		
		printf("\n===================");
		printf("\nVOCE SAIU DO JOGO\n");
		printf("===================\n");
		
		printf("\nRESULTADOS: \n");
		printf("\nTotal de vitorias JOGADOR: %d\n", vitoriaJog);
		printf("\nTotal de vitorias MAQUINA: %d\n", vitoriaPc);
		printf("\nTotal de Partidas: %d\n", partidas);
		
		return 0;
	}
	
	while(jogador > 3){
		
		printf("Opcao invalida, tente novamente\n");
		printf("\nSua opcao: ");
		scanf("%d", &jogador);
	
	}	
		
        printf("\nEscolha um valor de 0 a 5: ");
		scanf("%d", &valor);
		
			
	while(valor > 5){
		
		printf("Opcao invalida, tente novamente\n");
		printf("\nEscolha um valor de 0 a 5: ");
		scanf("%d", &valor);	
		
	}


		pc = rand() % 6;

		total = valor + pc;

		if(jogador == 1 && total % 2 == 0){

			printf("===================\n");
			printf("JOGADOR VENCEU!!!\n");

			printf("\nVoce escolheu Par e a maquina impar");

			printf("\nVoce jogou %d e o pc jogou %d\n", valor, pc);
			printf("total = %d\n", total);
			vitoriaJog = vitoriaJog + 1;
			partidas = partidas + 1;
			
			printf("\nJogador %d X %d Maquina\n", vitoriaJog, vitoriaPc);
			printf("===================\n");

		}

		if(jogador == 2 && total  % 2 != 0){

			printf("===================\n");
			printf("JOGADOR VENCEU!!!\n");

			printf("\nVoce escolheu impar e a maquina par");

			printf("\nVoce jogou %d e o pc jogou %d\n", valor, pc);
			printf("total = %d\n", total);
			vitoriaJog = vitoriaJog + 1;
			
			printf("\nJogador %d X %d Maquina\n", vitoriaJog, vitoriaPc);
			partidas = partidas + 1;
			printf("===================\n");

		}

		if(jogador == 1 && total % 2 != 0){

			printf("===================\n");
			printf("MAQUINA VENCEU!!!\n");

			printf("\nVoce escolheu Par e a maquina impar");

			printf("\nVoce jogou %d e o pc jogou %d\n", valor, pc);
			printf("total = %d\n", total);
			vitoriaPc = vitoriaPc + 1;
			
			printf("\nJogador %d X %d Maquina\n", vitoriaJog, vitoriaPc);
			partidas = partidas + 1;
			printf("===================\n");

		}

		if(jogador == 2 && total % 2 == 0){

			printf("===================\n");
			printf("MAQUINA VENCEU!!!\n");

			printf("\nVoce escolheu impar e a maquina par");

			printf("\nVoce jogou %d e o pc jogou %d\n", valor, pc);
			printf("total = %d\n", total);
			vitoriaPc = vitoriaPc + 1;
			
			printf("\nJogador %d X %d Maquina\n", vitoriaJog, vitoriaPc);
			partidas = partidas + 1;
			printf("===================\n");


		}	
		
	}while(jogador != 3);
	
	return 0;
}
