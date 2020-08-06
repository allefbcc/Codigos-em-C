#include <stdio.h>



int main(){

	int sexo;
	float h;
	float peso;


	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe sua altura: ");
	scanf("%f", &h);


	printf(" 1 - Masculino\n");
	printf(" 2 - Feminino\n");

	printf("Qual o seu sexo? ");

	scanf("%d", &sexo);


	if(sexo == 1){

		peso = (72.7 * h) - 58;

		printf("Seu peso eh: %.2f", peso);

	} if (sexo == 2){

		peso = (62.1 * h) - 44.7;

		printf("Seu peso eh: %.2f", peso);

	}


	return 0;
}
