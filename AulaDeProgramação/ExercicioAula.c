#include <stdio.h>


int main(){

	int valor;


	printf("Informe um numero: ");
	scanf("%d", &valor);


	if(valor >= -10){
		if(valor <= 10){
			if("valor % 3 == 0"){
				printf("eh multiplo");
			}

		}
		else{
			printf("numero fora da faixa");
		}
	}else{
		printf("numero fora da faixa");
	}



	return 0;
}
