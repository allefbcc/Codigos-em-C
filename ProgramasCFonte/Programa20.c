#include <stdio.h>
#include "ajuda.h"

int main(){

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	int n1, n2, ret_s, ret_m;

	mensagem();

	printf("Informe um número: ");
	scanf("%d", &n1);

	printf("Informe um número: ");
	scanf("%d", &n2);

	ret_s = soma(n1, n2);
	printf("A soma de %d com %d eh: %d\n", n1, n2, ret_s);

	ret_m = multiplicacao(n1, n2);
	printf("A multiplicação de %d com %d eh: %d", n1, n2, ret_m);


	return 0;
}
