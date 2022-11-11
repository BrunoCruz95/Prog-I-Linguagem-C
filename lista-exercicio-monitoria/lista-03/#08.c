
#include <stdio.h>
#include <string.h>

int main()
{
	char n1[30], n2[30];
	int tam = 0, i;
	printf("Digite: ");
	scanf("%[^\n]", n1);
	printf("Digite: ");
	scanf("%[^\n]", n2);

	tam = strlen(n2);

	for(i = 0; i <= tam; i++)
	{
		if(n1[-i] == n2[-i])
		{
			printf("\nEncaixa !\n");
		}
		else
		{
			printf("\nNao Encaixa !\n");
			break;
		}
	}
	getch();
	return 0;
}
