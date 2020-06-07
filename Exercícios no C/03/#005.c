#include <stdio.h>
#include <string.h>

int main()
{
	char frase[30];
	int i, tam;
	printf("Digite: ");
	scanf("%[^\n]", frase);
	tam = strlen(frase);

	for (i = tam; i >= 0; i--)
	{
		printf("%c", frase[i]);
	}
	printf("\n");
	getch();
	return 0;
}
