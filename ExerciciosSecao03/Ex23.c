#include <stdio.h>

int main(){

	float j;
	float m;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe o valor em metros: ");
	scanf("%f", &m);

	j = m / 0.91;

	printf("%.4f jardas", j);


	return 0;
}
