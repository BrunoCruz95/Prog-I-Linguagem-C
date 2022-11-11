#include <stdio.h>

int main()
{
	int n1;

	printf("Digite: ");
	scanf("%i", &n1);
	do
	{
		printf("%i ", n1);
		n1 = n1 - 1;
	}
	while (n1 >= 1);

	getch ();
	return 0;
}
