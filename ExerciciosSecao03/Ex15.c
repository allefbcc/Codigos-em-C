#include <stdio.h>



int main(){

	float graus;
	float radiano;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Digite o valor do angulo em radianos: ");
	scanf("%f", &radiano);

	graus = radiano * 180 / 3.14;

	printf("O Grau de %.1f R é:  %.2f", radiano, graus);

	return 0;

}
