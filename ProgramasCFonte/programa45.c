#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// atoi()

int main(){

	char valor_s[5];
	int valor_i;

	strcpy(valor_s, "4");

	valor_i = atoi(valor_s);

	printf("O valor eh %d", valor_i);






	return 0;
}
