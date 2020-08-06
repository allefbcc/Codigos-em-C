#include <stdio.h>


int main(){

	float c;
	float k;


	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe a temperatura em Celsius (°C): ");
	scanf("%f", &c);


	k = c + 273.15;

	printf("A temperatura %.2f° em Kelvin é: %.2f °C", c, k);



	return 0;
}
