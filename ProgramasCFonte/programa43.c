#include <stdio.h>

int main(){

	int n1, n2, soma;

	printf("Informe o numero: ");
	fflush(stdout);
	scanf("%d", &n1);

	printf("Informe o numero: ");
	fflush(stdout);
	scanf("%d", &n2);

	soma = n1 + n2;

	printf("A soma de %d com %d eh %d", n1, n2, soma);


	return 0;
}
