#include <stdio.h>



int main(){

	float l;
	float k;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Digite o valor em kilos: ");
	scanf("%f", &k);

	l = k / 0.45;

	printf("%.4f libras",l );

	return 0;


}
