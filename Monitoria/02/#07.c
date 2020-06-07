#include <stdio.h>

int main()
{
	int num, i = 1 , contp = 0, conti = 0;
	int maior = 0, menor = 0, soma = 0;
	while(num >= 0)
	{
		printf("Digite: ");
		scanf("%i", &num);
		if (num <= -1)
		{
			break;
		}
		soma = soma + num;
		if (i == 1)
		{
			menor = num;
			maior = num;
			i++;
		}
		if (num % 2 == 0)
		{
			contp++;
			if (num > maior)
			{
				maior = num;
			}
		}
		else
		{
			conti++;
			if (num < menor)
			{
				menor = num;
			}
		}
	}

	printf("\nMaior = %i\nMenor = %i\nSoma = %i\nPares = %i\nImpares = %i\n", maior, menor, soma, contp, conti);
	getch ();
	return 0;
}
