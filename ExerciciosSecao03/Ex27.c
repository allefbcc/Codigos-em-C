#include <stdio.h>

int main(){

	float h;
	float m;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe o valor em hectares: ");
	scanf("%f", &h);

	m = h * 10000;

	printf("%.0f metros quadrados", m);


	return 0;
}
