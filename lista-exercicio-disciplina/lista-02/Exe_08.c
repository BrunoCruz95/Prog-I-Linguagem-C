#include <stdio.h>

int main()
{
	int num, a = 1, s = 1, d = 1, m = 1, res, i = 1;

	printf("Digite: ");
	scanf("%i", &num);
	do
	{
		if (i <= 10)
		{
			res = num + a;
			printf("\t%i + %i = %i\n", num, a, res);
			a += 1;
			i++;
		}
		printf("\n");
		else if (i > 10 && i <= 20)
		{
			res = num - s;
			printf("\t%i - %i = %i\n", num, s, res);
			s += 1;
			i++;
		}
		printf("\n");
		else if (i > 20 && i <= 30)
		{
			res = num / d;
			printf("\t%i / %i = %i\n", num, d, res);
			d += 1;
			i++;
		}
		printf("\n");
		else if (i > 30 && i <= 40)
		{
			res = num * m;
			printf("\t%i * %i = %i\n", num, m, res);
			m += 1;
			i++;
		}
	}

while (i <= 40);

getch ();
return 0;
}
