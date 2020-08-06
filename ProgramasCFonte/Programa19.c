#include <stdio.h>

int soma(int num1, int num2);

void mensagem();

int main(){

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	int n1, n2, ret;

	printf("Informe um numero: ");
	scanf("%d", &n1);

	printf("Informe um numero: ");
	scanf("%d", &n2);

	ret = soma(n1, n2);

	printf("A soma de %d com %d eh: %d\n", n1, n2, ret);

	mensagem();

	return 0;
}

int soma(int numero1, int numero2){

	return numero1 + numero2;
}

void mensagem(){

	printf("Bem-vindo...");
}
