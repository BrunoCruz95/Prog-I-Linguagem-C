#include <stdio.h>

int main()
{
	int i, quadrado;

	for (i = 15; i <= 200; i++)
	{
		quadrado = i * i;
		printf("%d ", quadrado);
	}
	getch ();
	return 0;
}
