#include <stdio.h>
#include <math.h>

int main(){

	float v1;
	float v2;
	float v3;
	float q;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);


	printf("Infome o primeiro valor: ");
	scanf("%f", &v1);

	printf("Infome o segundo valor: ");
	scanf("%f", &v2);

	printf("Infome o terceiro valor: ");
	scanf("%f", &v3);

	q = pow(v1, 2) + pow(v2, 2) + pow(v3, 2);


	printf("A soma dos quadrados dos valores é: %.0f",q);


	return 0;
}
