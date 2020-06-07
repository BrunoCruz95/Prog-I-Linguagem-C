#include <stdio.h>

int main()
{
	int i, vetorA[10], vetorB[10];

	for(i = 0; i < 10; i++)
	{
		printf("Digite: ");
		scanf("%d", &vetorA[i]);
	}
	for(i = 0; i < 10; i++)
	{
		if(vetorA[i] % 2 == 0)
		{
			vetorB[i] = (vetorA[i] * 5);
		}
		else
		{
			vetorB[i] = (vetorA[i] + 5);
		}
	}
	for(i = 0; i < 10; i++)
	{
		printf("%d ", vetorA[i]);
	}
	printf("\n");
	for(i = 0; i < 10; i++)
	{
		printf("%d ", vetorB[i]);
	}
	printf("\n");
	getch();
	return 0;
}
