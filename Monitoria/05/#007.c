#include <stdio.h>
#include <strings.h>

int main()
{
	char vetor[30][10], aux[10], j = 1;
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("Digite: ");
		scanf("%[^\n]", &vetor[i]);
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; i++)
		{
			if(strcmp(vetor[i] > vetor[j]))
			{
				aux[i] = vetor[i];
				aux[j] = vetor[j];
				j++;
			}
		}
	}
	for(i = 0; i < 10; i++)
	{
		printf("%s\n", vetor[i]);
	}
	getch();
	return 0;
}
