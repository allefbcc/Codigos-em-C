#include <stdio.h>


int main(){

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	int Hora, Min, Seg, duracao;
	int H, M, S;
	int Ht, Mt, St;

	printf("Hora: ");
	scanf("%d", &Hora);

	printf("Minuto: ");
	scanf("%d", &Min);

	printf("Segundos: ");
	scanf("%d", &Seg);


	printf("Duracao em segundos: ");
	scanf("%d", &duracao);

	H = duracao / 3600;
	M = (duracao % 3600) / 60;
	S = (duracao % 3600) % 60;

	Ht = H + Hora;
	Mt = M + Min;
	St = S + Seg;

	if(St >= 60){

		Mt = Mt + 1;
		St = St - 60;

	}

	if(Mt >= 60){

		Ht = Ht + 1;
		Mt = Mt - 60;
	}

	printf("Termino: %dHrs %dMin %dSeg", Ht, Mt, St);


	return 0;
}
