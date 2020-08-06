#include <stdio.h>
#include <math.h>

/*

PROGRAMA QUE CONVERTE NUMEROS DE RETANGULAR PARA POLAR


*/

int main() {
	
	float a;
	float b;
	
	float modulo;
	float angulo;
	
	float pi = 3.14159265;
	
	printf("Informe a parte real: ");
	scanf("%f", &a);
	
	printf("Informe a parte Imaginaria: ");
	scanf("%f", &b);
	
	modulo = sqrt(a*a + b*b );
	angulo = atan(b/a) * 180 / pi;
	
	printf(" |Z| = %.4f \n", modulo);
	printf(" angulo = %.4f", angulo);
	
	
	
	
	
	
	
	
	
	return 0;
}
