#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
	int n1, i, primo = 0;
	printf("Digite: ");
	scanf("%i", &n1);

	for (i = 1 ; i <= n1; i++)
	{
		if (n1 % i == 0)
		{
			primo++;

		}

	}
	if (primo == 2)
	{
		printf("%i e primo\n", n1);
	}
	getchar();
	return 0;
}

