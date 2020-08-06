#include <stdio.h>


void incrementa(int* contador){

	printf("Antes de incrementar.\n");
	printf("O contador vale: %d\n", (*contador));// valor
	printf("O endereço de memória vale: %d\n", contador);// endereço de memória

	printf("Depois de incrementar.\n");
	printf("O contador vale: %d\n", ++(*contador));
	printf("O endereço de memória vale: %d\n", contador);


}

int main(){

	int contador = 10;

	printf("Antes de incrementar.\n");
	printf("O contador vale: %d\n", contador);
	printf("O endereço de memória vale: %d\n", &contador);

	incrementa(&contador);

	printf("depois de incrementar.\n");
	printf("O contador vale: %d\n", contador);
	printf("O endereço de memória vale: %d\n", &contador);



	return 0;
}
