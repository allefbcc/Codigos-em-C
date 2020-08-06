#include <stdio.h>
#include <math.h>



int main() {
	
	int a, b, c;
	int delta;
	int x1, x2;
	int imag1, imag2;
	
	printf(" Informe um numero para A: ");
	scanf("%d", &a);
	
	printf(" Informe um numero para B: ");
	scanf("%d", &b);
	
	printf(" Informe um numero para C: ");
	scanf("%d", &c);
	
	delta = pow(b, 2) - 4 * a * c;
	
	printf(" delta = %d\n", delta);
	
	if(delta >= 0){
		
		x1 = (-b + sqrt(delta)) / 2 * a;
		
		printf(" X1 = %d\n", x1);
		
		x2 = (-b - sqrt(delta)) / 2 * a;
		
		printf(" X2 = %d\n", x2);
	
		
	} else{
		
		delta  = delta*(-1);
		
		x1 = -b / (2*a);
		imag1 = sqrt(delta) / (2*a);
		
		x2 = -b / (2*a);
		imag2 = -sqrt(delta) / (2 * a);
		
		printf(" X1 =  %d + %di \n", x1, imag1);
		printf(" X2 =  %d %di \n", x2, imag2);
		
	
	
	
		
	}
	
	
	
	return 0;
}
