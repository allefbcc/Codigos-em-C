#include <stdio.h>

int main(){


	int qdt;
	float pag;
	float desc;
	float l;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);


	printf("Quantos dias você trabalhou? ");
	scanf("%d", &qdt);


	pag = (qdt * 30);

	desc = (pag * 8) / 100;

	l = pag - desc;


	printf("Vai ser pago: %.2f", l);




	return 0;

}




