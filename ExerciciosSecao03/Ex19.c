#include <stdio.h>



int main(){

	float l;
	float m;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Digite o valor em litros: ");
	scanf("%f", &l);

	m = l / 1000;

	printf("%.3f metros cúbicos",m );

	return 0;


}
