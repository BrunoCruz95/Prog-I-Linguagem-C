#include <stdio.h>

int main()
{
	float n1, n2;

	printf("Nota 1: ");
	scanf("%f", &n1);
	printf("Nota 2: ");
	scanf("%f", &n2);

	if (n1 < 0  ||  n2 < 0)
	{
		printf("\nNotas Invalidos");
	}
	else if (n1 > 10 || n2 > 10 )
	{
		printf("\nNotas Invalidos");
	}
	else
	{
		printf("\nValido");
	}
	printf("\nMedia = %.1f", ((n1+n2)/2));
	getch();
	return 0;
}
