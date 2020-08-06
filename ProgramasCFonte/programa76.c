#include <stdio.h>

int main(){

	//setvbuf (stdout, NULL, _IONBF, 0);
	//setvbuf (stderr, NULL, _IONBF, 0);

	int qtd, soma = 0;

	printf("Quantos numeros você quer soma? ");
	scanf("%d", &qtd);

	for(int i; i < qtd; i++){

		soma = soma + i * 2 + 3;


	}

	printf("A soma eh: %d", soma);



	return 0;
}
