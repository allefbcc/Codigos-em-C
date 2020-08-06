#include <stdio.h>


int main(){

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	char nome[50];

	printf("Qual o seu nome? ");
	gets(nome);

	printf("Olá %s\n", nome);


	char letras[26];

	int contador = 0;

	for(int i = 97; i <= 122; i++){
		letras[contador] = i;
		contador = contador + 1;
	}

	for(int i = 0; i < 26; i++){

		printf("%d == %c\n", letras[i], letras[i]);

	}

	return 0;
}
