#include <stdio.h>

int main()
{
	int vetor[10], i;

	for (i = 0; i < 10; i++)
	{
		printf("Digite: ");
		scanf("%d", &vetor[i]);
		if(vetor[i] < 0)
		{
			vetor[i] = 0;
		}
	}
	for(i = 0; i < 10; i++)
	{
		printf("%d ", vetor[i]);
	}
	getch();
	return 0;
}
