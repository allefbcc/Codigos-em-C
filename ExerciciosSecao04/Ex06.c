#include <stdio.h>
#include <math.h>


int main(){

	int n1;
	int n2;
	int dif;


	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Digite o 1° numero: ");
	scanf("%d", &n1);

	printf("Digite o 2° numero: ");
	scanf("%d", &n2);

	if(n1 > n2){

		dif = n1 - n2;

		printf(" O primeiro numero eh maior\n");
		printf("A diferença eh: %d", dif);
	}

	else{

		dif = n2 - n1;


		printf(" O segundo numero eh maior\n");
		printf("A diferença eh: %d", dif);

	}


	return 0;
}
