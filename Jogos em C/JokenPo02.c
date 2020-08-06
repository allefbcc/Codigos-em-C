#include <stdio.h>
#include <stdlib.h>



int main(){

printf("######################################################\n");
printf("################# BEM VINDO AO JOGO ##################\n");
printf("####################### DE ###########################\n");
printf("###################### JOKEMPO #######################\n");

	int jog;
	int pc;
	
	int vitoriaJogador = 0;
	int vitoriaPc = 0;	
	int empate = 0;
	
	int total = 0;
	

	while(jog != 4){
		
	printf("\nEscolha uma opcao:\n ");
	printf("\n 1 - Pedra\n");
	printf(" 2 - Papel\n");
	printf(" 3 - Tesoura\n");
	printf("\n 4 - Sair do Jogo\n");

	printf("\nQual a sua opcao? ");
	scanf("%d", &jog);

	while ((jog > 4) || (jog < 1)){

		printf("Jogada Invalida... Tente novamente\n");
		printf("Qual a sua opcao? \n");
		scanf("%d", &jog);

		}
		
		//Decidi querer jogar
		
		if(jog < 4){
	
		pc = rand() % 3+1;
	
		switch(pc){
	
		case 1:
			printf("\nO PC escolheu Pedra\n");
			break;
	
		case 2:
			printf("\nO PC escolheu Papel\n");
			break;
	
		case 3:
			printf("\nO PC escolheu Tesoura\n");
			break;
		}	
			
		}

	
	// JOGADOR GANHA

	if(jog == 1 && pc == 3) {


		printf("Voce escolheu Pedra\n");
		printf("VOCE GANHOOOOOOOOOOOOOU!!!\n");
		vitoriaJogador = vitoriaJogador + 1;
		total = total + 1;

		printf("\nJogador %d X %d Maquina\n", vitoriaJogador, vitoriaPc);
		printf("==========================\n");

	}

	if (jog == 2 && pc == 1){


		printf("Voce escolheu Papel\n");
		printf("VOCE GANHOOOOOOOOOOOOOU!!!\n");
		vitoriaJogador = vitoriaJogador + 1;
		total = total + 1;

		printf("\nJogador %d X %d Maquina\n", vitoriaJogador, vitoriaPc);
		printf("==========================\n");


	}

	if (jog == 3 && pc == 2){


		printf("Voce escolheu Tesoura\n");
		printf("VOCE GANHOOOOOOOOOOOOOU!!!\n");
		vitoriaJogador = vitoriaJogador + 1;
		total = total + 1;

		printf("\nJogador %d X %d Maquina\n", vitoriaJogador, vitoriaPc);
		printf("==========================\n");

	}

	// PC GANHA

	if(pc == 1 && jog == 3){



		printf("Voce escolheu Tesoura\n");
		printf("PERDEEEEUUU!!!\n");
		vitoriaPc = vitoriaPc + 1;
		total = total + 1;

		printf("\nJogador %d X %d Maquina\n", vitoriaJogador, vitoriaPc);
		printf("==========================\n");

	}

	if (pc == 2 && jog == 1){


			printf("Voce escolheu Pedra\n");
			printf("PERDEEEEUUU!!!\n");
			vitoriaPc = vitoriaPc + 1;
			total = total + 1;

			printf("\nJogador %d X %d Maquina\n", vitoriaJogador, vitoriaPc);
			printf("==========================\n");


		}

	if(pc == 3 && jog == 2){


			printf("Voce escolheu Papel\n");
			printf("PERDEEEEUUU!!!\n");
			vitoriaPc = vitoriaPc + 1;
			total = total + 1;

			printf("\nJogador %d X %d Maquina\n", vitoriaJogador, vitoriaPc);
			printf("==========================\n");

		}

		// EMPATE

  	if(jog == 1 && pc == 1){


  		printf("Voce escolheu Pedra \n");
  		printf("EMPATOU!!!\n");
  		empate = empate + 1;
  		total = total + 1;
  		printf("==========================\n");
	


  	}

  	if (jog == 2 && pc == 2) {


  		printf("Voce escolheu Papel \n");
  		printf("EMPATOU!!!\n");
		empate = empate + 1;
		total = total + 1;
		printf("==========================\n");
	


  	}

  	if(jog == 3 && pc == 3){


  		printf("Voce escolheu Tesoura \n");
  		printf("EMPATOU!!!\n");
		empate = empate + 1;
		total = total + 1;
		printf("==========================\n");
	

	  }    // Sai do Jogo
	  
	  	switch(jog){
	  	
	  	case 4:
	  		
	  		printf("==========================");
	  		printf("\nVOCE SAIU DO JOGO! \n");
	  		printf("\nRESULTADOS:\n");
	  		printf("==========================\n");
	  		printf("\nVoce venceu: %d Vez(es)\n", vitoriaJogador);
		 	printf("Pc venceu: %d Vez(es)\n", vitoriaPc);
		 	printf("Voces Empataram: %d Vez(es)\n", empate);
		 	printf("Total de partidas: %d\n", total);
	 		printf("\n==========================\n");
		 	
		 	break;
  		 	
	  } 
	
}

 	 system("Pause");

	
	return 0;	
		
	}
