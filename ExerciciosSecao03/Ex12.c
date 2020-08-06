#include <stdio.h>


int main(){

	float kilometros;
	float milhas;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe a distancia em milhas: ");
	scanf("%f", &milhas);


	kilometros = milhas * 1.609;

	printf("%.4f Km", kilometros);



	return 0;
}
