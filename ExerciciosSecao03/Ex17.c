#include <stdio.h>



int main(){

	float polegadas;
	float cm;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Digite o valor em centimetros: ");
	scanf("%f", &cm);

	polegadas = cm / 2.54;

	printf("%.4f polegadas",polegadas );

	return 0;

}
