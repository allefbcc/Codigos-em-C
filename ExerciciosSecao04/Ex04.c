#include <stdio.h>
#include <math.h>


int main(){

	int n1;
	int raiz;
	int aoQuadrado;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe o numero: ");
	scanf("%d", &n1);


	if(n1 > 0){

		raiz = sqrt(n1);
		aoQuadrado = pow(n1, 2);


		printf("O quadrado do numero eh: %d", aoQuadrado);
		printf("a raiz eh: %d\n", raiz);

	}




	return 0;
}
