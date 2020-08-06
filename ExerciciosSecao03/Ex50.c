#include <stdio.h>


int main(){


	int atual = 2020;
	int idade;
	int nasc;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe sua idade: ");
	scanf("%d", &idade);


	nasc = atual - idade;

	printf("Você nascem em: %d", nasc);



	return 0;
}
