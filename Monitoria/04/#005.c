#include <stdio.h>

int main()
{
	int n1, n2, n3, menor = 0, maior = 0, meio = 0;

	printf("Digite: ");
	scanf("%i", &n1);
	printf("Digite: ");
	scanf("%i", &n2);
	printf("Digite: ");
	scanf("%i", &n3);

	if(n1 > n2 && n1 > n3 )
	{
		maior = n1;
		if (n2 < n3)
		{
			menor = n2;
			meio = n3;
		}
		else
		{
			menor = n1;
			meio = n2;
		}
	}
	else if(n2 > n1 && n2 > n3)
	{
		maior = n2;
		if (n1 < n3)
		{
			menor = n1;
			meio = n3;
		}
		else
		{
			menor = n1;
			meio = n2;
		}
	}
	else if(n3 > n2 && n3 > n1)
	{
		maior = n3;
		if(n2 < n1)
		{
			menor = n2;
			meio = n1;
		}
		else
		{
			menor = n1;
			meio = n2;
		}
	}
	printf("O segundo menor numero: %d", meio);
	getch();
	return 0;
}



