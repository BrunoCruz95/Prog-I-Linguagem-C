#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char vetor[10][10], aux[20];
	int i, j;
	
	for(i = 0; i < 10; i++)
	{
		printf("%d nome: ", i + 1);
		fgets(vetor[i], 10, stdin);
	}
	for (j = 1; j < 10; j++)
	{
		strcpy(aux, vetor[j]);
		i = j - 1;
		while(i >= 0 && strcmp(vetor[i], aux) > 0)
		{
			strcpy(vetor[i + 1], vetor[i]);
			i--;
		}
		strcpy(vetor[i + 1], aux);
	}
	printf("\nEm nomes ordem alfabetica: \n");
	for (i = 0; i < 10; i++)
	{
		printf("-----------------------------\n");
		printf("%d\t%s", i + 1,vetor[i]);
		
	}
	getch();
	return 0;
}

