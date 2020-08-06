#include <stdio.h>



int main(){

	float n1;
	float n2;
	float media;


	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("informe a primeira nota: ");
	scanf("%f", &n1);

	printf("informe a segunda nota: ");
	scanf("%f", &n2);


	if((n1 > 0 && n2 > 0)){

		media = (n1 + n2) / 2;

		printf("A media eh: %.1f", media);

	}

	else{

		printf("Nota invalida");


	}




	return 0;

}
