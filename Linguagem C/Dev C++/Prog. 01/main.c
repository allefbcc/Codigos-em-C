#include <stdio.h> // BIBLIOTECA IMPORTADA PARA USAR A FUN�AO printf e scanf

/*

UM PROGRAMA QUE SOMA DOIS NUMEROS DIGITADOS PELO USU�RIO DO PROGRAMA E CALCULA SUA SOMA.

OBS 1.: N�O USEM ACENTOS ou cedilha EM printf, PODE SER USADO EM COMENTARIO
OBS 2.: %d SERVE PARA ARMAZENAR VALORES INTEIROS (N�O POSSUEM VIRGULA)

*/

int main() { // INICIO DA FUN��O PRINCIPAL INICIDADO POR UMA CHAVE, � ONDE VOC� VAI ESCREVER SEU C�DIGO E O MESMO SERA EXECUTADO
	
	int numero1;    // DECLARO UMA VARIAVEL PARA GUARDAR UM VALOR DO TIPO INTEIRO
	int numero2;    // DECLARO UMA VARIAVEL PARA GUARDAR OUTRO VALOR DO TIPO INTEIRO
	int soma;        //DECLARO UMA VARIAVEL PARA GUARDAR O RESULTADO DA OPERA��O ENVOLVENDO OS VALORES ANTERIORES
	
	printf("DIGITE UM NUMERO: "); // EXIBO UMA MENSAGEM PEDINDO PRO USUARIO DIGITAR UM NUMERO
	scanf("%d", &numero1);      // GUARDO O N�MERO QUE ELE DIGITOU NA VARIAVEL numero1
	
	
	printf("DIGITE OUTRO NUMERO: ");  // EXIBO OUTRA MENSAGEM PRO USUARIO DIGITAR OUTRO NUMERO
	scanf("%d", &numero2);          // GUARDO NOVAMENTE O N�MERO QUE ELE DIGITOU, AGORA NA VARIAVEL numero2
	
	
	soma = numero1 + numero2;       // A VARIAVEL soma, VAI FAZER A SOMA DOS VALORES QUE FORAM GUARDADOS NAS VARI�VEIS numero1 E numero2
	
	
	printf("A soma de %d com %d eh: %d", numero1, numero2, soma); // AQUI EXIBO O RESULTADO DA SOMA
	
	// CADA %d SER� SUBSTITUIDO PELO VALOR GUARDADO NAS VARIAVEIS ACIMA.
	

	return 0;  // COMO A FUN��O � DO TIPO INTEIRO, ELA TEM QUE RETORNA ALGO, AQUI RETORNA ZERO, MAS ISSO N�O TEM INFLU�NCIA NO NOSSO PROGRAMA
	
} //FIM DA FUN��O PRINCIPAL FECHADO POR CHAVE
