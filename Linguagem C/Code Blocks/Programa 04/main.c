#include <stdio.h>
#include <math.h>

/*

PROGRAMA QUE CONVERTE NUMEROS NA FORMA POLAR PARA RETANGULAR

*/

int main() {

	float modulo;
	float angulo;

	float a;
	float b;

	float pi;

	pi =  3.14159265;

	printf("Informe o modulo: ");
	scanf("%f", &modulo);

	printf("Informe o angulo: ");
	scanf("%f", &angulo);

	a = modulo * cos(angulo * pi / 180);

	b = modulo * sin(angulo * pi / 180);

	printf("Z = %.4f", a);
	printf("Z = %.4fj", b);





	return 0;
}
