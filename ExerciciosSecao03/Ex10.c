#include <stdio.h>


int main(){

	float kilometrosPorHora;
	float metrosPorSegundo;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe a velocidade em Km/h: ");
	scanf("%f", &kilometrosPorHora);


	metrosPorSegundo = kilometrosPorHora /3.6;

	printf("%.4f M/s", metrosPorSegundo);



	return 0;
}
