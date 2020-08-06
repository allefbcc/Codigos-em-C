#include <stdio.h>

int main(){

	float a;
	float m;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe o valor em metros: ");
	scanf("%f", &m);

	a = m * 0.000247;

	printf("%.4f acres", a);


	return 0;
}
