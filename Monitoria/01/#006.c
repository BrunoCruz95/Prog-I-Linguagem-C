#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
	int n1, n2, soma = 0;

	for (n2 = 1; n2 <= 5; n2++)
	{
		printf("Digite: ");
		scanf("%i", &n1);
		soma += n1;

	}
	printf("A soma de todos os valores e: %i", soma);
	getchar();
	return 0;
}
