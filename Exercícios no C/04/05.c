#include <stdio.h>
#define Q_ALUNOS 5
#define Q_NOTAS 3
struct Aluno
{
	int matricula;
	char nome[51];
	float nota[Q_NOTAS];
};
int main()
{
	struct Aluno aluno[Q_ALUNOS];
	int indiceAluno,
		indiceNota,
		indiceAlunoMaiorMedia;
	float maiorMedia = -1, media;
	for(indiceAluno = 0; indiceAluno < Q_ALUNOS; indiceAluno++)
	{
		printf("%d Aluno :\n\n", indiceAluno + 1);
		printf("Nome: ");
		scanf("%s", aluno[indiceAluno].nome);
		for(indiceNota = 0; indiceNota < Q_NOTAS; indiceNota++)
		{
			printf("%d nota: ", indiceNota + 1);
			scanf("%f", &aluno[indiceAluno].nota[indiceNota]);
		}
	}
	for(indiceAluno = 0; indiceAluno < Q_ALUNOS; indiceAluno++)
	{
		media = 0;
		for(indiceNota = 0; indiceNota < Q_NOTAS; indiceNota++)
		{
			media = media + aluno[indiceAluno].nota[indiceNota];
		}
		media = media / Q_NOTAS;
		if(maiorMedia < media)
		{
			maiorMedia = media;
			indiceAlunoMaiorMedia = indiceAluno;
		}
	}
	printf("Aluno com maior media\n\n");
	printf("Aluno: %s\n", aluno[indiceAlunoMaiorMedia].nome);
	for(indiceNota = 0; indiceNota < Q_NOTAS; indiceNota++)
	{
		printf("%d nota : %0.1f\n", indiceNota + 1, aluno[indiceAlunoMaiorMedia].nota[indiceNota]);
	}
	return 0;
}
