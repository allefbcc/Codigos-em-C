#include <stdio.h>
#include <math.h>

int main(){

	float a;
	float b;
	float soma;
	float raiz;
	float h;


	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe o 1° cateto: ");
	scanf("%f", &a);

	printf("Informe o 2° cateto: ");
	scanf("%f", &b);

	soma = a*a + b*b;

	h = sqrt(pow(soma, 2));
	raiz = sqrt(h);



	printf("%.0f \n",soma);
	printf("%.0f",raiz);

	//printf("O valor da hipotenusa é: %.2f", h);


	return 0;
}
