#include <stdio.h>

int main()
{
	int num, i, cont = 0;

	for (i = 1; i <= 5; i++)
	{
		printf("Digite: ");
		scanf("%i", &num);
		if (num % 2 == 0)
		{
			cont++;
		}
	}
	printf("Existem %i PARES\n", cont);
	getch();
	return 0;
}
