#include <stdio.h>



int main(){

	float graus;
	float radiano;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Digite o valor do angulo em graus: ");
	scanf("%f", &graus);

	radiano = graus * 3.14 / 180;

	printf("O Radiano de %.1f° é:  %.2f", graus, radiano);

	return 0;

}
