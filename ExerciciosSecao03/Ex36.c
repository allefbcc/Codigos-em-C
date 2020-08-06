#include <stdio.h>

int main(){

	float a;
	float r;
	float v;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe a altura: ");
	scanf("%f", &a);

	printf("Informe o raio: ");
	scanf("%f", &r);

	v = (3.151592 * (r*r) ) * a;

	printf("O volume do cilindro circular é: %.0f", v);

	return 0;

}
