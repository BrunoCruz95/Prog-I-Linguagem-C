#include <stdio.h>

int main()
{
	int n, i;

	printf("Digite: ");
	scanf("%d", &n);

	for(i = 1; n != 0; i++)
	{
		if(i % 4 == 0)
		{
			printf("PUM\n");
			n = n - 1;
		}
		else
		{
			printf("%d ", i);
		}
	}
	getch();
	return 0;
}
