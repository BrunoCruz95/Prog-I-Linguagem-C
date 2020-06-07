#include <stdio.h>

int main()
{
	float n1, media;
	int  soma = 0, quantidade = 0;
	do
	{
		printf("Digite: [0 sair do programa] ");
		scanf("%f", &n1);
		soma += n1;
		quantidade += 1;
	}
	while (n1 != 0);
	media = soma / (quantidade - 1);
	printf("\nSoma = %i\nQuantidade = %i\nMedia = %.1f\n", soma, quantidade - 1, media);
	getch();
	return 0;

}
