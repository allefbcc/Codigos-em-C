#include <stdio.h>

#ifndef PI
	#define PI 3.14567
#endif

int main(){

	int valor = 5;

	valor = 467;

	printf("O valor eh: %d\n", valor);

	printf("PI vale: %f\n", (2 * PI));

	#ifdef PI
		printf("O valor de PI eh: %f", PI);
	#endif


	return 0;
}
