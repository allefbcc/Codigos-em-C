#include <stdio.h>
#include <math.h>


int main(){

	float x;
	float y;
	float c;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe a coordenada de x: ");
	scanf("%f", &x);

	printf("Informe a coordenada de y: ");
	scanf("%f", &y);

	c = sqrt(pow(x,2) + pow(y,2));

	printf("A distancia eh: %f", c);








	return 0;
}
