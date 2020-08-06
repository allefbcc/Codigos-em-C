#include <stdio.h>

int main(){


	float c;
	float l;
	float preco;

	float dimensao;
	float custo;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe o comprimento do terreno: ");
	scanf("%f", &c);

	printf("Informe a largura do terreno: ");
	scanf("%f", &l);

	printf("Informe o preco do metro de tela: ");
	scanf("%f", &preco);


	dimensao = (2 * c) + (2 * l);

	custo = dimensao * preco;

	printf("O custo eh: %.2f R$", custo);


	return 0;
}

