#include <stdio.h>
#include <string.h>

int main()
{
	int i, j, matriz[4][5];

	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("Digite: ");
			scanf("%d", &matriz[i][j]);
		}
	}
	for(i = 0; i < 4; i++)
	{
		printf("\n");
		for(j = 0; j < 5; j++)
		{
			printf(" %d ", matriz[i][j]);
		}
	}
	getch();
	return 0;
}

