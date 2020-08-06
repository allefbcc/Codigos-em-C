#include <stdio.h>
#include <math.h>

int main(){

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);


	int conj[11];
	int quad[11];

	for(int i = 1; i <= 10; i++){
		printf("Informe o %d° numero: ", i);
		scanf("%d", &conj[i]);
	}

	for(int i = 1; i <= 10; i++){
		quad[i] = pow(conj[i], 2);

	}

	for(int i = 1; i <= 10; i++){
		printf("\nNumeros armazenados: %d", conj[i]);
	}

	printf("\n");

	for(int i = 1; i <= 10; i++){
		printf("\nQuadrado dos números: %d", quad[i]);

	}


	return 0;
}
