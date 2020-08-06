#include <stdio.h>


int main(){

	float l;
	float k;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Digite o valor em libras: ");
	scanf("%f", &l);

	k = l * 0.45;

	printf("%.4f kilos",k);

	return 0;


}
