#include <stdio.h>
#include <stdbool.h>
int main()
{
	int idade = 1, media, soma = 0, conti = 0, cont = 0;

	while (1)
	{
		printf("Digite: ");
		scanf("%i", &idade);
		if (idade < 0)
		{
			break;
		}
		cont++;
		soma += idade;
		if(idade > 18)
		{
			conti++;
		}
	}
	media = soma / cont;
	printf("\nMedia : %i\nMaiores de 18: %i\n", media, conti);
	getchar();
	return 0;
}
