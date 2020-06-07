#include <stdio.h>

int primos(num)
{
	int i, cont = 0, primo[10];

	if(num % 2 != 0)
	{
		primo[cont] = num;
		cont++;
	}
	return primo;
}

int main()
{
	int i, num;

	for(i = 0; i < 10; i++)
	{
		printf("Digite: ");
		scanf("%d", &num);
		primos(num);
	}
	
	getch();
	return 0;
}
