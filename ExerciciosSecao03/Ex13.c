#include <stdio.h>


int main(){

	float kilometros;
	float milhas;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe a distância em Km: ");
	scanf("%f", &kilometros);


	milhas = kilometros / 1.609;

	printf("%.3f Milhas", milhas);



	return 0;
}
