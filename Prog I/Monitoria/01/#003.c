#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
	int num = 0, cont = 0;
	printf("Os 10 primeiros numeros pares sao: \n");
	for (num ; cont < 10; num++)
	{
		if (num % 2 == 0)
		{
			printf("%i\n", num);
			cont++;
		}
	}
	getch();
	return 0;
}
