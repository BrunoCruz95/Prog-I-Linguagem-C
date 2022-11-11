#include <stdint.h>

int main()
{
	int n1, i, resul;

	for (i = 1; i <= 7; i++)
	{
		printf("\nDigite: ");
		scanf("%i", &n1);
		if (n1 % 5 == 0 && n1 > 10)
		{
			resul = n1 / 5;
			printf("Divisivel por 5 e MAIOR que 10\nResultado = %i", resul);
		}
	}
	getch();
	return 0;
}
