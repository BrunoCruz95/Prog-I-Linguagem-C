#include <stdio.h>
/*
Em Matem�tica, um n�mero perfeito � um n�mero natural para o qual
 a soma de todos os seus divisores naturais pr�prios � igual ao pr�prio n�mero.
Por exemplo, o n�mero 28 �, pois. Todo n�mero perfeito � um n�mero triangular,
bem como um n�mero hexagonal.
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
