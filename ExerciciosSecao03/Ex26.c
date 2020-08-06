#include <stdio.h>

int main(){

	float h;
	float m;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe o valor em metros quadrados: ");
	scanf("%f", &m);

	h = m * 0.0001;

	printf("%.4f hectares", h);


	return 0;
}
