#include <stdio.h>
#include <string.h>


struct st_aluno{
	char matricula[10];
	char nome[100];
	char curso[50];
	int ano_nascimento;
}alunos[5];

int main(){

	setvbuf (stdout, NULL, _IONBF, 0);
	setvbuf (stderr, NULL, _IONBF, 0);

	//struct sd_aluno alunos[5];

	for(int i = 0; i < 5; i++){

		printf("\nInforme a matrícula do aluno: ");
		fgets(alunos[i].matricula, 10, stdin);

		printf("Informe o nome do aluno: ");
		fgets(alunos[i].nome, 100, stdin);

		printf("Informe o curso do aluno: ");
		fgets(alunos[i].curso, 50, stdin);

		printf("Informe o ano de nascimento do aluno: ");
		scanf("%d", &alunos[i].ano_nascimento);
		getchar();


	}

	for(int i = 0; i < 5; i++){

		printf("=======Dados do aluno %d======\n", (i+1));
		printf("Matrícula: %s\n", alunos[i].matricula);
		printf("Nome: %s\n", alunos[i].nome);
		printf("Curso: %s\n", alunos[i].curso);
		printf("Ano de Nascimento: %d\n", alunos[i].ano_nascimento);


	}



	return 0;
}
