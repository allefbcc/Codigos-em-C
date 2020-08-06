#include <stdio.h>

int main(){

	float a;
	float m;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe o valor em acres: ");
	scanf("%f", &a);

	m = a * 4048.58;

	printf("%.4f metros quadrados", m);


	return 0;
}
