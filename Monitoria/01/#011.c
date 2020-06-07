#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
	int n1, n2, i, soma = 0;

	printf("Digite: ");
	scanf("%i", &n1);
	printf("Digite: ");
	scanf("%i", &n2);
	if ((n1 <= 0) || (n2 <= 0))
	{
		printf("\nValor invalido !\n");
	}
	else
	{
		if ((n1 > 0) || (n2 > 0))
		{
			printf("\n");
			for(i = n1; i <= n2; i++)
			{
				soma = soma + i;
				printf("%i ", i);
			}
			printf("= %i\n", soma);
		}
	}
	getchar();
	return 0;
}
