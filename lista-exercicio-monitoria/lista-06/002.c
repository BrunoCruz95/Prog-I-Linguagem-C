#include <stdio.h>

int fat(num)
{
	int res = 1, i;
	for(i = num; i > 0; i--)
	{
		res = res * i;
	}
	printf("\nO fatorial de %d e: %d.\n", num, res);
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
