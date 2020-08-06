#include <stdio.h>


int main(){

	float v;
	float vt10;
	float d;

	float p;
	float comissao1;
	float comissao2;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe o valor a ser lido: ");
	scanf("%f", &v);

	d = (v * 10) / 100;
	vt10 = v - d;

	p = vt10/3;

	comissao1 = (vt10 * 5) / 100;
	comissao2 = (v * 5) / 100;

	printf("O valor total com dez por cento de desconto é: %.2f \n", vt10);
	printf("Pode dividir no parcelamento de 3x de: %.2f \n", p);
	printf("Sua comissão a vista: %.2f \n", comissao1);
	printf("Sua comissão parcelada: %.2f \n", comissao2);






	return 0;
}
