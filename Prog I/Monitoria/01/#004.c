#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// 5 = 1 * 2 * 3 * 4 * 5

int main()
{
	int n1, n2 = 1, i;

	printf("Digite: ");
	scanf("%i", &n1);

	for (i = 1; i <= n1; i++)
	{
		n2 *= i;
	}
	printf("%i", n2);

	getchar();
	return 0;
}
