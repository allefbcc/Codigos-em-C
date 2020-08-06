#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// atol()

int main(){

	char valor_s[500];
	long int valor_li;

	strcpy(valor_s, "49992939939393933");

	valor_li = atol(valor_s);

	printf("O valor eh %ld", valor_li);


	return 0;
}
