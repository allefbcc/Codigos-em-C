
#include <stdio.h>

int main(){

	int idade;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Qual é a sua idade? ");
	scanf("%d", &idade);

	printf("A sua idade é %d", idade);




	return 0;
}
