#include <stdio.h>


int main(){

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	int numero;

	printf("Informe um numero: ");
	scanf("%d", &numero);

	if(numero > 100 && numero < 200){
		printf("Voce digitou um numero entre 100 e 200");
	}

	else{
		printf("Você digitou um numero fora da faixa entre100 e 200");
	}



	return 0;
}
