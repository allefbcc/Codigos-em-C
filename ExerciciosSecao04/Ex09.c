#include <stdio.h>



int main(){

	float salario;
	float prestacao;
	float x;



	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("informe seu salario: ");
	scanf("%f", &salario);

	printf("informe o valor da prestacao: ");
	scanf("%f", &prestacao);


	x = (salario * 20) / 100;


	if (prestacao > x){

		printf("Emprestimo Negado");
	}

	else {

		printf("Emprestimo Concedido");

			}



	return 0;

}
