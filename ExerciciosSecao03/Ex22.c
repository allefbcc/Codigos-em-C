#include <stdio.h>

int main(){

	float j;
	float m;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe o valor em jardas: ");
	scanf("%f", &j);

	m = 0.91 * j;

	printf("%.4f metros", m);


	return 0;
}
