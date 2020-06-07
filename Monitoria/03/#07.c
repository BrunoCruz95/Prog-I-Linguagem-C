#include <stdio.h>

int main()
{
	int num, i;

	printf("Digite: ");
	scanf("%d", &num);

	for(i = 1; i <= 10000; i++)
	{
		if (num % i == 2)
		{
			printf("%d\n", i);
		}
	}
	getch();
	return 0;
}

