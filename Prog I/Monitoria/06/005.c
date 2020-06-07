#include <stdio.h>
#include <string.h>

int fun()
{

	int cont = 0, i, tam;
	char frase[30] ;

	printf("Digite: ");
	scanf("%[^\n]", frase);

	tam = strlen(frase);

	for(i = 0; i <= tam; i++)
	{
		if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
		{
			cont++;
		}
	}
	printf("\nNa frase %s\nTem %d vogais.\n", frase, cont);
}
int main()
{
	fun();
	getch();
	return 0;
}
