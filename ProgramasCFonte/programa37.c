#include <stdio.h>

enum dias_da_semana{

	segunda,
	terca,
	quarta,
	quinta,
	sexta,
	sabado,
	domingo

};


int main(){

	enum dias_da_semana d1,d2;

	d1 = quinta;

	d2 = 3;

	if(d1 == d2){
		printf("Os dias s�o iguais...");
	}else{
		printf("Os dias n�o s�o iguais...");
	}



	return 0;
}
