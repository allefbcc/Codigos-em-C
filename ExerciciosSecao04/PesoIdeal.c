#include <stdio.h>



int main(){

	char sexo;
	float h;
	float peso;


	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe sua altura: ");
	scanf("%f", &h);

	printf("Qual o seu sexo? ");
	scanf("%s", &sexo);


	if(sexo == 'm'){

		peso = (72.7 * h) - 58;

		printf("Seu peso eh: %.2f", peso);

	}if (sexo == 'f'){

		peso = (62.1 * h) - 44.7;

		printf("Seu peso eh: %.2f", peso);

	} if(sexo != 'm' && sexo != 'f') {

		printf("Sexo Inválido");
	}


	return 0;
}
