#include <stdio.h>

int main()
{
	int num, a = 1, b = 0, c = 0, d = 0, e = 0;

	do
	{
		a++;
		printf("Digite: ");
		scanf("%d", &num);
		if(num % 2 == 0)
		{
			b++;
		}
		else if(num % 3 == 0)
		{
			c++;
		}
		else if(num % 4 == 0)
		{
			d++;
		}
		else if(num % 5 == 0)
		{
			e++;
		}

	}
	while(a <= 10);
	printf("Multiplo de 2 = %d\nMultiplo de 3 = %d\nMultiplo de 4 = %d\nMultiplo de 5 = %d\n", b, c, d, e);

	getch();
	return 0;
}
