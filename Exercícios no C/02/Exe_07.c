#include <stdio.h>

int main()
{
	int n1, i, resultado = 1;

	printf("Digite: ");
	scanf("%i", &n1);

	for (i = 1; i <= n1; i++)
	{
		resultado = resultado * i;
	}
	printf("%i", resultado);
	getch ();
	return 0;
}
