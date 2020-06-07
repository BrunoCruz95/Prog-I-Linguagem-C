#include <stdio.h>

void vetores(tam)
{
	int vetorA[tam], vetorB[tam], vetorC[tam], i;

	for(i = 0; i < tam; i++)
	{
		printf("Vetor A : ", i + 1);
		scanf("%d", &vetorA[i]);
	}
	for(i = 0; i < tam; i++)
	{
		printf("Vetor B: ", i + 1);
		scanf("%d", &vetorB[i]);
	}
	for(i = 0; i < tam; i++)
	{
		vetorC[i] = vetorA[i] + vetorB[i];
		printf("%d ", vetorC[i]);
	}
}
int main()
{
	int tam;

	printf("Tamanho: ");
	scanf("%d", &tam);

	vetores(tam);

	return 0;
}
