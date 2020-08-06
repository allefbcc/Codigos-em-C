#include <stdio.h>


int main(){

	float c;
	float f;


	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe a temperatura em Celsius (°C): ");
	scanf("%f", &c);


	f = (c * 9/5)+32;

	printf("A temperatura %.2f° em fahrenheit é: %.2f", c, f);



	return 0;
}
