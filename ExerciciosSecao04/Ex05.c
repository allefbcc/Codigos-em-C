#include <stdio.h>
#include <math.h>


int main(){

	int n1;


	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe o numero: ");
	scanf("%d", &n1);


	if(n1 % 2 == 0){

		printf("Eh par");


	}

	else{

		printf("Eh impar");
	}



	return 0;
}
