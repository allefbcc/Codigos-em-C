#include <stdio.h>


int main(){

	int num1;
	int num2;
	int num3;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Digite o 1° número: ");
	scanf("%d", &num1);

	printf("Digite o 2° número: ");
	scanf("%d", &num2);

	printf("Digite o 3° número: ");
	scanf("%d", &num3);

	int soma = num1 + num2 + num3;

	printf("A soma de %d, %d e %d é: %d", num1, num2, num3, soma);


	return 0;
}
