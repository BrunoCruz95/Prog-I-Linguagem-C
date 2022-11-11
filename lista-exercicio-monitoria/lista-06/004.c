#include <stdio.h>

int fun(A)
{
	if(A % 2 == 0)
	{
		printf("\nPAR\n");
	}
	else
	{
		printf("\nIMPAR\n");
	}
}
int main()
{
	int num;

	printf("Digite: ");
	scanf("%d", &num);

	fun(num);

	getch();
	return 0;
}
