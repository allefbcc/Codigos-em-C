#include <stdio.h>


int main(){

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	float inv1, inv2, inv3, invt;
	float p, rec1, rec2, rec3;

	printf("Informe o 1° valor investido: ");
	scanf("%f", &inv1);

	printf("Informe o 2° valor investido: ");
	scanf("%f", &inv2);

	printf("Informe o 3° valor investido: ");
	scanf("%f", &inv3);

	printf("Valor do prêmio: ");
	scanf("%f", &p);

	invt = inv1 + inv2 + inv3;

	rec1 = p * inv1 / invt;
	rec2 = p * inv2 / invt;
	rec3 = p * inv3 / invt;

	printf("Valor1 R$: %.2f ", rec1);
	printf("Valor2 R$: %.2f ", rec2);
	printf("Valor3 R$: %.2f", rec3);







	return 0;
}
