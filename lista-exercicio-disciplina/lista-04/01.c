#include <stdio.h>


int tab(num)
{
	int i, res = 0;

	for(i = 0; i <= 10; i++)
	{
		res = num * i;
		printf("%d x %d = %d\n", num, i, res);
	}
}
int main()
{
	int num;

	printf("Digite: ");
	scanf("%d", &num);
	tab(num);

	getch();
	return 0;
}
