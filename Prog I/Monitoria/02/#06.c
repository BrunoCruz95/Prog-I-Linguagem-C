#include <stdio.h>

int main()
{
	int n1, soma = 0, quant = 0, media;
	do
	{
		printf("Digite: [0 Para sair do programa] ");
		scanf("%i", &n1);
		soma = soma + n1;
		quant = quant + 1;
	}
	while(n1 > 0);
	media = soma / (quant - 1);

	printf("\nMedia : %i\n", media);
	getch();
	return 0;
}
