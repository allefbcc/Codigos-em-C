#include <stdio.h>

int main(){

	float num;
	float quinta;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe um número: ");
	scanf("%f", &num);

	quinta = num / 5;

	printf("A quinta parte de %.2f é: %.2f", num, quinta);




	return 0;
}
