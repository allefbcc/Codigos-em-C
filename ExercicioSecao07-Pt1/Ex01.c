#include <stdio.h>

int main(){

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);


	int A[7];
	int soma;

	for(int i = 0; i <= 5; i++){
		printf("Digite o valor do vetor [%d]: ", i);
		scanf("%d", &A[i]);
	}

	soma = A[0] + A[1] + A[5];

	printf("\nA soma de A[0],A[1] e A[5] eh: %d\n", soma);

	A[4] = 100;

	for(int i = 0; i <= 5; i++){
		printf("\nVetor [%d]: %d\n", i, A[i]);
	}



	return 0;
}
