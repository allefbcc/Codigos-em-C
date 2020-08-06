#include <stdio.h>

int main(){


	int cifra1;

	int cifra2;
	int cifra22;

	int cifra3;
	int cifra33;

	int cifra4;
	int cifra44;

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

	cifra44 = cifra33 / 10;
	cifra4 = cifra44 % 10;

	printf(" %d \n %d \n %d \n %d", cifra4, cifra3, cifra2, cifra1);

	return 0;
}
