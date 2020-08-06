#include <stdio.h>


int main(){

	float n1;
	float n2;
	float n3;
	float n4;
	float m;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);


	printf("Infome a primeira nota: ");
	scanf("%f", &n1);

	printf("Infome a segunda nota: ");
	scanf("%f", &n2);

	printf("Infome a terceira nota: ");
	scanf("%f", &n3);

	printf("Infome a quarta nota: ");
	scanf("%f", &n4);

	m = (n1 + n2 + n3 + n4) / 4;


	printf("A média é: %.0f",m);


	return 0;
}
