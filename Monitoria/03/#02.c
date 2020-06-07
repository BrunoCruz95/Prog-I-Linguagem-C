#include <stdio.h>

int main()
{
	int num, res , i, a = 1;

	do
	{
		printf("Digite: ");
		scanf("%i", &num);
		res = 1;
		a++;
		for(i = 1; i <= num; i++)
		{
			res = res * i;
		}
		printf("\t%i\n", res);
	}
	while (a <= 10);

	getch();
	return 0;
}
