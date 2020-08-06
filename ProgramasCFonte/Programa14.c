#include <stdio.h>

/*
 * matrizes

  numeros[5][5]; // [linhas] [colunas]

 [00][01][02][03][04]
 [10][11][12][13][14]
 [20][21][22][23][24]
 [30][31][32][33][34]
 [40][41][42][43][44]
 *
 * */

int main(){

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	char nome[3][50];

	for(int i = 0; i < 3; i++){

		printf("Qual o seu nome? ");
		gets(nome[i]);

	}

	for(int i = 0; i < 3; i++){

		printf("Olá %s\n", nome[i]);

	}

	return 0;
}
