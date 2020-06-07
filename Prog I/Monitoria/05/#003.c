#include <stdio.h>

int main()
{
	float vetor[10], soma = 0, media;
	int cont = 0, i, j = 1;

	for(i = 0; i < 10; i++)
	{
		printf("Nota %d: ", j);
		scanf("%f", &vetor[i]);
		soma += vetor[i];
		j++;
	}
	media = (soma / 10);
	for(i = 0; i < 10; i++)
	{
		if(vetor[i] > media)
		{
			cont++;
		}
	}
	printf("\nMedia = %.1f\n%d Alunos estam acima da Media.\n", media, cont);
	getch();
	return 0;
}
