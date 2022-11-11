#include <stdio.h>

int fat(num)
{
	int res = 1, i;
	for(i = num; i > 0; i--)
	{
		res = res * i;
	}
	return res;
}
int main()
{
	int vetor[5], novo[5], i;

	for(i = 0; i < 5; i++)
	{
		printf("Digite: ");
		scanf("%d", &vetor[i]);
		novo[i] = fat(vetor[i]);
	}
	for(i = 0; i < 5; i++)
	{
		printf("%d ", novo[i]);
	}
	getch();
	return 0;
}
