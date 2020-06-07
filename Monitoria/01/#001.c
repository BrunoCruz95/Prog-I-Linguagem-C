#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
	int n1, n2, n3, maior;

	printf("Digite: ");
	scanf("%i", &n1);
	printf("Digite: ");
	scanf("%i", &n2);
	printf("Digite: ");
	scanf("%i", &n3);
	if (n1 > n2 && n1 > n3)
	{
		printf("%i", n1);
	}
	else if (n2 > n1 && n2 > n3)
	{
		printf("%i", n2);
	}
	else
	{
		printf("%i", n3);
	}
	getch ();
	return 0;
}
