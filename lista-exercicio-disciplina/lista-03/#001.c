#include <stdio.h>

int main()
{
	int vetor[8];
	int soma = 0, media, nota;

	for(nota = 0; nota < 8; nota++)
	{
		printf("Digite NOTA: ");
		scanf("%d", &vetor[nota]);
		soma = soma + vetor[nota];
	}
	media = soma / 8;

	printf("\nA media e:\n");
	printf("%d\n", media);
	getch();
	return 0;
}
