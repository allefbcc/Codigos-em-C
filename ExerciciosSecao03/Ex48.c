#include <stdio.h>

int main(){


	int hora;
	int minutos;
	int segundos;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe o valor em segundos: ");
	scanf("%d", &segundos);

	hora = segundos / 3600;

	minutos = (segundos - (hora * 3600)) / 60;

	segundos = segundos - (hora * 3600) - (minutos * 60);

	printf(" %dh :%dm :%ds", hora, minutos, segundos);

	return 0;
}
