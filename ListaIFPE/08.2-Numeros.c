#include <stdio.h>


int main(){

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	int n1;
	int n2;
	int n3;

	int cont = 0;

	printf("Informe um numero: ");
	scanf("%d", &n1);

	printf("Informe um numero: ");
	scanf("%d", &n2);

	printf("Informe um numero: ");
	scanf("%d", &n3);


	if(n1 < 0){
		cont = cont + 1;
	}

	if(n2 < 0){
		cont = cont + 1;
	}

	if(n3 < 0){
		cont = cont + 1;
	}


	printf("Voce digitou %d numeros negativos", cont);

		return 0;

	}



