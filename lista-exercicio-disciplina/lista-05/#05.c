#include <stdio.h>
#include <stdlib.h>

int* Vetor(int tamanho);

int main()
{
	int *vetor, i, tam;

	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tam);

	vetor = Vetor(tam);

	if(vetor != NULL)
	{
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
	}
	else
	{
		printf("O vetor nao pode ser alocado.\n");
	}
	free(vetor);

	return 0;
}
int* Vetor(int tam)
{
	if(tam <= 0 )
	{
		return NULL;
	}
	return (int*) malloc(sizeof (int) * tam);
}
