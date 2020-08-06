#include <stdio.h>
#include <stdlib.h>


int main(){

	int jog;
	int pc;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Escolha uma opcao:\n ");
	printf("1 - Pedra\n");
	printf(" 2 - Papel\n");
	printf(" 3 - Tesoura\n");

	printf("Qual a sua opcao? ");
	scanf("%d", &jog);

	srand(time(NULL));

	pc = rand() % 3;

	switch(pc){

	case 1:
		printf("\nO pc escolheu Pedra\n");
		break;

	case 2:
		printf("\nO PC escolheu Papel\n");
		break;

	case 3:
		printf("\nO PC escolheu Tesoura\n");


	}

	if((jog == 1 && pc == 3) || (jog == 2 && pc == 1) || (jog == 3 && pc == 2)){ // Jogador ganha

		printf("VOCE GANHOOOOOOOOOOOOOU!!!\n");
		printf("Voce escolheu %d\n", jog);

	}

	if((pc == 1 && jog == 3) || (pc == 2 && jog == 1) || (pc == 3 && jog == 2) ){ // PC ganhou

			printf("PERDEEEEUUU!!!\n");
			printf("Voce escolheu %d\n", jog);


		}


	if((jog == pc)){

		printf("EMPATOU!!!\n");
		printf("Voce escolheu %d\n", jog);
	}


  /*	if((jog == 1 && pc == 1) || (jog == 2 && pc == 2) || (jog == 3 && pc ==3)){

		printf("EMPATOU!!!\n");
		printf("Voce escolheu %d\n", jog);

	  }

  */

	return 0;
}
