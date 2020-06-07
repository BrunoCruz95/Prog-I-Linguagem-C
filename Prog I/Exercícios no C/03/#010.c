#include <strings.h>

int main()
{
	char frase[30], novo[30];
	int i, j = 0, tam;

	printf("Digite: ");
	gets(frase);

	tam = strlen(frase);
	for(i = (tam - 1); i >= 0; i--)
	{
		novo[j] = frase[i];
		j++;
	}
	printf("\nOriginal : %s\n", strupr(frase));
	printf("Inverso : %s\n", strupr(novo));
	novo[j] = '\0'; // PRECISA POR O CARACTERE NULO NA ULTIMA POSIÇÃO.
	if(strcmp(frase, novo) == 0)  // VERIFICA SE FRASE E == A NOVO SE RETORNA 0 E PALIDROMO
	{
		printf("\nE Palidromo.\n");
	}
	else
	{
		printf("\nNAO e Palidromo.\n");
	}
	getch();
	return 0;
}
