#include <stdio.h>


int main(){

	float c;
	float k;


	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe a temperatura em Kelvin (°K): ");
	scanf("%f", &k);


	c = k - 273.15;


	printf("A temperatura %.2f° em Celsius é: %.2f °C", k, c);



	return 0;
}
