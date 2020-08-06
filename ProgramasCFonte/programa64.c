#include <stdio.h>
#include <ctype.h>

int main(){

	char teste = 'H';

	if(isalnum(teste)){
		printf("Eh alfanumerico\n");
	}else{
		printf("Nao eh alfanumerico\n");
	}


	if(isalpha(teste)){
		printf("Eh alfabetico\n");
	}else{
		printf("Nao eh alfabetico\n");
	}


	if(isdigit(teste)){
		printf("Eh digito\n");
	}else{
		printf("Nao eh digito\n");
	}


	if(islower(teste)){
		printf("Eh minusculo\n");
	}else{
		printf("Nao eh minusculo\n");
	}

	if(ispunct(teste)){
		printf("Eh pontuacao\n");
	}else{
		printf("Nao eh pontuacao\n");
	}

	if(isspace(teste)){
		printf("Eh espaco\n");
	}else{
		printf("Nao eh espaco\n");
	}


	if(isupper(teste)){
		printf("Eh maisculo\n");
	}else{
		printf("Nao eh maisculo\n");
	}

	printf("A letra %c em maiusculo eh %c\n", teste, toupper(teste));

	printf("A letra %c em minusculo eh %c\n", teste, tolower(teste));

	return 0;
}
