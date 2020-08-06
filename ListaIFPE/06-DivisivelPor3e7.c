#include <stdio.h>


int main(){

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	int numero;

	printf("Informe um numero: ");
	scanf("%d", &numero);

	if(numero % 3 == 0 && numero % 7 == 0){

		printf("Eh divisivel por 3 e por 7");

	}else{
		printf("Não eh divisivel por 3 e nem por 7");
	}



	return 0;
}
