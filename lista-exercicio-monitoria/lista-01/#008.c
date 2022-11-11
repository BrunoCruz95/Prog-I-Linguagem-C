#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
	int n1, n2, menor, pos = 1;

	for (n2 = 1; n2 <= 10; n2++)
	{
		printf("Digite: ");
		scanf("%i", &n1);
		if(n2 == 1)
		{
			menor = n1;
		}
		else
		{
			if (n1 < menor)
			{
				menor = n1;
				pos = n2;
			}
		}

	}
	printf("O menor numero digitado e: %i\nE esta na posicao %i\n", menor, pos);
	getchar ();
	return 0;
}

