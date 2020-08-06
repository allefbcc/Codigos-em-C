#include <stdio.h>

int main(){

	float qt = 780.000;

	float v1;
	float v2;
	float v3;


	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	v1 = (qt * 46) / 100;


	v2 = (qt * 32) / 100;


	v3 = qt - (v1 + v2);


	printf("O 1° ganhador receberá: %.3f \n", v1);
	printf("O 2° ganhador receberá: %.3f \n", v2);
	printf("O 3° ganhador receberá: %.3f \n", v3);




	return 0;

}




