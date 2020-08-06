#include <stdio.h>
#include <math.h>

int main(){

	float raio;
	float area;


	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe o raio: ");
	scanf("%f", &raio);

	area = (3.141592 * raio * raio);


	printf("Area do circulo é: %.2f", area);


	return 0;
}
