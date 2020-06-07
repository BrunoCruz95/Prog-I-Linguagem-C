#include <stdio.h>

int main()
{
	int vetor[10], i, menor, maior;

	for(i = 0; i < 10; i++)
	{
		printf("Digite: ");
		scanf("%d", &vetor[i]);
	}
	for(i = 0; i < 10; i++)
	{
		if(i == 0)
		{
			maior = vetor[i];
			menor = vetor[i];
		}
		else if (vetor[i] > maior)
		{
			maior = vetor[i];
		}
		else if (vetor[i] < menor)
		{
			menor = vetor[i];
		}
	}
	printf("\nMenor = %d\nMaior = %d\n", menor, maior);
	getch();
	return 0;
}
