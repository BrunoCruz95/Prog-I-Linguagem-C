#include <stdio.h>

int main()
{
	int num, i ;

	printf("Digite: ");
	scanf("%i", &num);

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf("%i\n", i);
		}
	}
	getch ();
	return 0;
}
