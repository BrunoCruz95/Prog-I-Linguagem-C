#include <stdio.h>

int main()
{
	int vetor[5], novo[5], i, j = 4;

	for(i = 0; i < 5; i++)
	{
		printf("Digite: ");
		scanf("%d", &vetor[i]);
	}
	for(i = 0; i < 5; i++)
	{
		novo[i] = vetor[j];
		j--;
	}
	printf("Normal = "); 
	for(i = 0; i < 5; i++)
	{
		printf("%d ", vetor[i]);
	}
	printf("\nInvertido = ");
	for(i = 0; i < 5; i++){
		printf("%d ", novo[i]);
	}
	getch();	
	return 0;
}
