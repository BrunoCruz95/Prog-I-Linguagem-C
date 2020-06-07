#include <stdio.h>

int main()
{
	int vetor[10], i;

	for (i = 0; i < 5; i++)
	{
		printf("Digite: ");
		scanf("%d", &vetor[i]);
	}
	for (i = 0; i < 5; i++)
	{
		if(vetor[i] % 2 == 0)
		{
			printf("%d = Par\n", vetor[i]);
		}
		else if(vetor[i] % 2 != 0)
		{
			printf("%d = Impar\n", vetor[i]);
		}
	}
	getch();
	return 0;
}
