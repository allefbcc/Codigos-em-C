#include <stdio.h>

int main(){

	FILE *arq;


	//fopen(nome-do-arquivo, forma-de-abertura-do-arquivo)
	// w = abrir o arquivo para escrita
	// r = abrir o arquivo para leitura
	// wa = abrir o arquivo para adição de conteúdo
	arq = fopen("arquivo.txt", "w");

	fclose(arq);


	return 0;
}
