#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
	int n1, n2, rel;
	printf("Digite: ");
	scanf("%i", &n1);
	printf("\n");
	for (n2 = 1; n2 <= 10; n2++)
	{
		rel = n1 * n2;
		printf("\t%i x %i = %i\n", n1, n2, rel);
	}
	getchar();
	return 0;
}
