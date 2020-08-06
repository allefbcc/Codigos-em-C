#include <stdio.h>


int main(){

	float kilometrosPorHora;
	float metrosPorSegundo;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe a velocidade em M/s: ");
	scanf("%f", &metrosPorSegundo);


	kilometrosPorHora = metrosPorSegundo * 3.6;

	printf("%.1f km/h", kilometrosPorHora);



	return 0;
}
