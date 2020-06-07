#include <stdio.h>
#include <string.h>

int main()
{
	char frase[30];
	char letra[30];
	int i, cont = 0, tam = 0;

	printf("Digite: ");
	gets(frase);
	printf("Letra a ser contada ? ");
	gets(letra);

	tam = strlen(frase);

	for(i = 0; i <= tam; i++)
	{
		if(frase[i] == letra[0])
		{
			cont++;
		}
	}
	printf("\nA letra %s aparece %d vezes em %s.\n", strupr(letra), cont, strupr(frase));
	getch();
	return 0;
}
