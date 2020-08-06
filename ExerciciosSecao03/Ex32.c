#include <stdio.h>


int main(){

	int num;
	int dobroAnt;
	int triploSuc;
	int result;

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe um número: ");
	scanf("%d", &num);

	dobroAnt = (num - 1) * 2;
	triploSuc = (num + 1) * 3;

	result = dobroAnt + triploSuc;

	printf("%d",result);


	return 0;
}
