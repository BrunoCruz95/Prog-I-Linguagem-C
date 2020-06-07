#include <stdint.h>

int main()
{
	int atual, volume = 0, res, i, var;

	printf("\nATECAO Numero > 0 aumenta e < 0 diminuir\nMAXIMO = 50\nMINIMO = 0\n");
	printf("\nEm que volume esta sua TV: ");
	scanf("%i", &atual);
	printf("Quantas vezes alterou o volume da TV? ");
	scanf("%i", &res);

	for(i = 0; i < res; i++)
	{
		printf("DIMINUIR / AUMENTAR ? ");
		scanf("%d", &var);
		volume = atual + (var);
		if(volume < 0)
		{
			volume = 0;
		}
		else if(volume > 50)
		{
			volume = 50;
		}
		atual = volume;
	}
	printf("\nSua TV esta agora com o volume %d\n", volume);
	getch();
	return 0;
}
