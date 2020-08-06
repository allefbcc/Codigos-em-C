#include <stdio.h>

int main(){

	float real;
	float cot;
	float dolar;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe o valor em R$: ");
	scanf("%f", &real);

	printf("Informe a cotação do dolar: ");
	scanf("%f", &cot);

	dolar = real * cot;

	printf("%.2f dolares", dolar);


	return 0;
}
