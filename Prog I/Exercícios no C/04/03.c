#include <stdio.h>

void fun(a, b, c)
{
	int res;
	res = a + b * c * c;
	printf("%d", res);
}

int main()
{
	int a, b, c;

	printf("Digite: ");
	scanf("%d", &a);
	printf("Digite: ");
	scanf("%d", &b);
	printf("Digite: ");
	scanf("%d", &c);

	fun(a, b, c);
	return 0;
}
