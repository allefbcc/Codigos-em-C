#include <stdio.h>

int main(){

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	int n1, n2, dif;

	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);

	printf("Digite o seundo numero: ");
	scanf("%d", &n2);


	if(n1 > n2){

		dif = n1 - n2;

		printf("\nO primeiro numero eh maior.\n");
		printf("A diferença eh: %d\n", dif);

	}if(n2 > n1){

		dif = n2 - n1;

		printf("\nO segundo numero eh maior\n");
		printf("A diferença eh: %d\n", dif);

	}if(n1 == n2){
		printf("\nNao tem diferença, ambos são iguais\n");
	}


	return 0;
}
