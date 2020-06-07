#include <stdio.h>

int main()
{
	int vetor[10], i, j, primo = 0;

	for(i = 0; i < 10; i++)
	{
		printf("Digite: ");
		scanf("%d", &vetor[i]);
	}
	for(i = 0; i < 10; i++)
	{
		primo = 0;
		printf("%d ", vetor[i]);
		for (j = 1 ; j <= vetor[i]; j++)
		{
			if (vetor[i] % j == 0)
			{
				primo = primo + 1;
			}
		}

		if (primo == 2)
		{
			printf("= E Primo\n");
		}
		else if (primo != 2)
		{
			printf("= Nao e Primo\n");
		}
	}
	getch();
	return 0;
}
