#include <stdio.h>


int main(){

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	int numero;

	printf("Informe um numero: ");
	scanf("%d", &numero);

	if(numero % 3 == 0){

		printf("Eh multiplo de 3");

	}else{
		printf("Não eh multiplo de 3");
	}


	return 0;
}
