#include <stdio.h>

void retorna(int *vetor, int *min, int *max)
{
	int i, menor, maior;
	maior = menor = vetor[0];
	for(i = 1; i < 5; i++)
	{
		if(vetor[i] > maior)
		{
			maior = vetor[i];
		}
		if(vetor[i] < menor)
		{
			menor = vetor[i];
		}
	}
	(*min) = menor;
	(*max) = maior;
}
int main()
{
	int vetor[5], i, maior, menor;
	for(i = 0; i < 5; i++)
	{
		printf("Digite: ");
		scanf("%d", &vetor[i]);
	}
	retorna(vetor, &menor, &maior);
	printf("\nMaior = %d\nMenor = %d\n", maior, menor);
	return 0;
}


