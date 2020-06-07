#include <stdint.h>

int main()
{
	int num, i, n1 = 0, n2 = 1, res;

	
	printf("Digite: ");
	scanf("%i", &num);
	printf("%i %i ", n1, n2);

	// 0 1 1 2 3 5 8 13 
	
	for (i = 3; i <= num; i++)
	{
		res = n2 + n1;
		n1 = n2;
		n2 = res;
		printf("%i ", res);
	}
	getch ();
	return 0;
}
