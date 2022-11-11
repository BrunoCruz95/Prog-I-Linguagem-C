#include <stdio.h>

int main()
{
	char nome[30];
	int i;
	printf("Digite seu nome: ");
	scanf("%[^\n]", nome);

	for (i = 1; i <= 50; i++)
	{
		printf("%s\n", nome);
	}
	getch ();
	return 0;
}
