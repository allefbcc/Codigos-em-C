#include <stdio.h>



int main(){

	float l;
	float m;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Digite o valor em metros cúbicos: ");
	scanf("%f", &m);

	l = 1000 * m;

	printf("%.1f litros",l );

	return 0;


}
