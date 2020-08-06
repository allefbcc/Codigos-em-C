#include <stdio.h>

int main(){


	char minus;
	char maius;


	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);


	printf("Informe a letra maiuscula: " );
	scanf("%c", &maius);

	minus = maius - 32;

	printf("A letra em maisculo é: %c ", minus);




	return 0;
}
