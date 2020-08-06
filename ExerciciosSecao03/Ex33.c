#include <stdio.h>


int main(){

	float area;
	float lado;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe o lado do quadrado: ");
	scanf("%f", &lado);

	area = lado * lado;

	printf("%.0f", area);


	return 0;
}
