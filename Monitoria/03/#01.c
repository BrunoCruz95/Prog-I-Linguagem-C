#include <stdio.h>

int main()
{
	int n1, i, a = 1, primo;

	do
	{
		printf("Digite: ");
		scanf("%i", &n1);
		a++;
		primo = 0;
		for (i = 1; i <= n1; i++)
		{
			if (n1 % i == 0)
			{
				primo++;
			}
		}
		if (primo == 2)
		{
			printf("PRIMO\n");
		}
	}
	while (a <= 10);
	getch();
	return 0;
}



