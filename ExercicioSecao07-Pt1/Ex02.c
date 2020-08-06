#include <stdio.h>

int main(){

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	int valores[7];

	for(int i = 0; i <= 5; i++){
		printf("Informe o valor para o vetor[%d]:", i);
		scanf("%d", &valores[i]);
	}

	for(int i = 0; i <= 5; i++){
		printf("Vetor[%d] = %d\n", i, valores[i]);
	}



	return 0;
}
