#include <stdio.h>

int main()
{
	int n1, i;

	printf("Digite: ");
	scanf("%i", &n1);

	for (i = 1; i <= n1; i++)
	{
		printf("%i ", i);
	}
	getch ();
	return 0;
}
