#include <stdio.h>

/*
 6. Faça um programa que leia o valor de um produto X e leia a quantidade de reais de um cofrinho que contenha:
• N moedas de 1 real;
• N moedas de 50 centavos;
• N moedas de 25 centavos;
• N moedas de 10 centavos;
• N moedas de 5 centavos;
• N moedas de 1 centavos.

Obs.: O programa deverá verificar se o total de reais
que contem no cofrinho é o bastante para compra o produto X. */


int main(){

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	float produto;
	float moedas;

	float n1, n2, n3, n4, n5, n6;
	float soma;


	printf("Informe o valor do produto: ");
	scanf("%f", &produto);

	printf("Quantas moedas vc tem no cofre? ");
	scanf("%f", &moedas);

	n1 = moedas * 1.00;
	n2 = moedas * 0.50;
	n3 = moedas * 0.25;
	n4 = moedas * 0.10;
	n5 = moedas * 0.05;
	n6 = moedas * 0.01;

	soma = n1 + n2 + n3 + n4 + n5 + n6;

	if(produto <= soma){

		printf("O produto custa %.2f R$\n", produto);
		printf("Voce tem %.2f R$\n", soma);
		printf("PODE COMPRAR O PRODUTO");


	}else{
		printf("O produto custa %.2f\n", produto);
		printf("Voce tem %.2f R$\n", soma);
		printf("NÃO PODE COMPRAR O PRODUTO");


	}






	return 0;
}
