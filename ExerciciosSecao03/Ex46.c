#include <stdio.h>

int main(){


	int cifra1;

	int cifra2;
	int cifra22;

	int cifra3;
	int cifra33;

	int num;


	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);


	printf("Informe o numero de 100 a 999: ");
	scanf("%d", &num);

	cifra1 = num % 10;

	cifra22 = num / 10;
	cifra2 = cifra22 % 10;

	cifra33 = cifra22 / 10;
	cifra3 = cifra33 % 10;

	printf("O numero invertido é: %d%d%d", cifra1, cifra2, cifra3);

	return 0;
}
