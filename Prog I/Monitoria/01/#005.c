#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
	int n1, n2, maior;
	for (n2 = 1; n2 <= 10; n2++)
	{
		printf("Digite: ");
		scanf("%i", &n1);
		if (n2 == 1)
		{
			maior = n1;
		}
		else
		{
			if (n1 > maior)
			{
				maior = n1;
			}
		}
	}
	printf("O maior numero digitado e: %i\n", maior);
	getchar ();
	return 0;
}
