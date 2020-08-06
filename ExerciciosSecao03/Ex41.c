#include <stdio.h>


int main(){

	float ht;
	float h;
	float result;
	float aumento;
	float calc;


	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Custo da hora: R$");
	scanf("%f", &h);

	printf("Quantas horas você trabalhou por mês?");
	scanf("%f", &ht);

	calc = (h*ht);

	aumento = (calc * 10) / 100;

	result = calc + aumento;

	printf("Você receberá %.2f R$", result);


	return 0;
}
