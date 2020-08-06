#include <stdio.h>

int main(){

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);


	int n; // Variavel que guarda seu valor na memoria

	//declarando o ponteiro
	int* p;


	printf("Informe o numero: ");
	scanf("%d", &n);

	// inicializando o ponteiro
	p = &n;


	printf("O número informado foi: %d\n", n);

	printf("O endereço de memória eh: %d\n", &n);

	printf("Endereço do ponteiro: %p\n", p);


	return 0;
}
