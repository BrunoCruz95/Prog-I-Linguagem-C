#include <stdio.h>
/*
Em Matemática, um número perfeito é um número natural para o qual
 a soma de todos os seus divisores naturais próprios é igual ao próprio número.
Por exemplo, o número 28 é, pois. Todo número perfeito é um número triangular,
bem como um número hexagonal.
*/
int main()
{
	int num, i, cont = 0;

	printf("Digite: ");
	scanf("%i", &num);

	for (i = 1; i < num; i++)
	{
		if (num % i == 0)
		{
			cont = cont + i;
			printf("%d  ", num / i);
		}
	}
	printf("\n%d\n", cont);
	if (cont == num)
	{
		printf("Numero Perfeito\n");
	}
	getch ();
	return 0;
}
