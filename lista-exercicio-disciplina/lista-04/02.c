#include <stdio.h>


void fat(num)
{
	int res = 1, i;

	for(i = num; i > 0; i--)
	{
		res = res * i;
	}
	printf("Fatorial %d! = %d", num, res);
}

int main()
{
	int num;

	printf("Digite: ");
	scanf("%d", &num);

	fat(num);

	getch();
	return 0;
}
