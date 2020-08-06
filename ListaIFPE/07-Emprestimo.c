#include <stdio.h>


int main(){

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	float salario;
	float emprestimo;
	float parcela;
	float parcValor;

	float minimo;
	float maximo;


	printf("Informe seu salário (R$): ");
	scanf("%f", &salario);

	printf("Qual o valor do empréstimo? ");
	scanf("%f", &emprestimo);

	printf("Quer parcelar em quantas vezes? ");
	scanf("%f", &parcela);

	printf("Qual o valor de cada parcela? ");
	scanf("%f", &parcValor);

	minimo = salario * 30 / 100;

	if(emprestimo > minimo){
		printf("Emprestimo não pode ser aprovado, pq o valor eh maior que TRINTA POR CENTO de seu salário\n");

		maximo = emprestimo / minimo;

		printf("O valor maximo da prestação para esse caso seria: %.2f", maximo);

	}else{
		printf("Emprestimo aprovado");
	}






	return 0;
}
