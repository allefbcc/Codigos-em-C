#include <stdio.h>


int main(){

	int num;
	int ant;
	int suc;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe um número: ");
	scanf("%d", &num);

	ant = num - 1;
	suc = num + 1;

	printf("O antecessor de %d é: %d\n", num, ant);
	printf("O sucessor de %d é: %d", num, suc);


	return 0;
}
