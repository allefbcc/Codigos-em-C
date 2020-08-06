#include <stdio.h>


int main(){

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	int numero;
	int cont = 0;

	for(int i = 0; i <= 2; i++){

		printf("Informe um numero: ");
		scanf("%d", &numero);

	if(numero < 0){

		cont = cont + 1;

		}

	}

	printf("Voce digitou %d numeros negativos", cont);



	return 0;


	}
