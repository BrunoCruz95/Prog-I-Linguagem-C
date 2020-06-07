#include <stdio.h>

int main()
{
	int tam;

	printf("Digite o tamanho do vetor: ");
	scanf("%i", &tam);

	int *vetor, i;

	vetor = (int*) malloc(sizeof (int) * tam);

	for(i = 0; i < tam; i++)
	{
		printf("Digite: ");
		scanf("%d", &vetor[i]);
	}

	printf("Vetor: \n");
	for(i = 0; i < tam; i++)
	{
		printf("%d ", vetor[i]);
	}

	free(vetor);

	return 0;
}
