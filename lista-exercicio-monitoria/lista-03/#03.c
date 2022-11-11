#include <stdio.h>

int main()
{
	int n1, i, cont = 0, a = 1;

	do
	{
		printf("Digite: ");
		scanf("%i", &n1);
		a++;
		if(n1 > 3 && n1 < 7)
		{
			cont++;
		}
	}
	while(a <= 10);
	printf("\n%i Numeros estam no intervalo de 3 a 7", cont);
	getch();
	return 0;
}
