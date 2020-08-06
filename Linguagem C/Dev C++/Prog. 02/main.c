#include <stdio.h>

int main(int argc, char *argv[]) {
	
	
	int numero1;    
	int numero2;    
	int soma;        
	
	printf("DIGITE UM NUMERO: "); 
	scanf("%d", &numero1);      
	
	
	printf("DIGITE OUTRO NUMERO: ");  
	scanf("%d", &numero2);         
	
	
	soma = numero1 + numero2;       
	
	
	printf("A soma de %d com %d eh: %d", numero1, numero2, soma); 
	
	
	return 0;
}
