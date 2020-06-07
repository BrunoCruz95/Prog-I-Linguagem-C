#include <stdio.h>
#include <string.h>
int main()
{
	char frase[30];
	int tam;
	printf("Digite: ");
	scanf("%[^\n]", frase);
	tam = strlen(frase);
	if (tam > 10)
	{
		printf("\nAcesso Permitido.\n");
	}
	else
	{
		printf("\nAcesso Negado !\n");
	}
	getch();
	return 0;
}
