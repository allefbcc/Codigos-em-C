#include <stdio.h>



int main(){

	float polegadas;
	float cm;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Digite o valor em polegadas: ");
	scanf("%f", &polegadas);

	cm = polegadas * 2.54;

	printf("%.2f centimetros",cm );

	return 0;

}
