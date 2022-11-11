#include <stdio.h>
#include <string.h>

int main()
{
	int i, cont = 0, tam;
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
	printf("A frase tem %d vogais", cont);
	getch();
	return 0;
}
