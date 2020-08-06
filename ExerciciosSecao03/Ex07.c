#include <stdio.h>


int main(){

	float c;
	float f;


	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	printf("Informe a temperatura em Fahrenheit (°F): ");
	scanf("%f", &f);


	c = (f -32) * 5/9;

	printf("A temperatura %.2f° em Celsius é: %.2f °C", f, c);



	return 0;
}
