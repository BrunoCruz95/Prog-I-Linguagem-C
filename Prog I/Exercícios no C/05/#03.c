#include <stdio.h>

struct Aluno
{
	int matricula;
	char nome[30];
	float nota[3];
};

int main()
{
	printf("Tamanho: %d bytes\n", sizeof (struct Aluno));
	return 0;
}
