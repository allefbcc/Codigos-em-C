#include <stdio.h>

void mensagem(){
	printf("Bem-vindo!\n");
}


int soma(int num1, int num2){

	int res = num1 + num2;

	return res;

}

void proximo_char(char caractere){
	printf("%c", caractere+1);

}

int main(){

	printf("Olá...\n");
	mensagem();
	printf("%d\n", soma(4, 6));

	char cara = 104;
	proximo_char(cara);

	return 0;
}
