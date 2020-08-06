#include <stdio.h>
#include <math.h>

int main(){


	int n1;
	int raiz;


	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);


	printf("Digite um numero: ");
	scanf("%d", &n1);

	if(n1 > 0){

		raiz = sqrt(n1);
		printf("A raiz eh: %d", raiz);
	}

	else{

		printf("Numero invalido");
	}


	return 0;
}
