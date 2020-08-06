#include <stdio.h>

int main(){


	int n1, n2;


	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Digite o 1° numero: ");
	scanf("%d", &n1);

	printf("Digite o 2° numero: ");
	scanf("%d", &n2);


	if(n1 > n2){

		printf("O Numero 1 eh maior");
	}

	else{

		printf("O Numero 2 eh maior");
	}

	return 0;
}
