#include <stdio.h>
#include <string.h>

int main()
{
	char todos[30], pessoa[3], nome[30], sexo[30];
	int idade, i, j = 0, tam;

	for(i = 0; i < 2; i++)
	{
		printf("Nome: ");
		gets(nome);
		printf("Idade: ");
		scanf("%d", &idade);
		printf("Sexo: [M/F] ");
		gets(sexo);

		if(idade > 18)
		{
			if (sexo == 'M' || 'm')
			{
				pessoa[0] = nome;
				pessoa[1] = idade;
				pessoa[2] = sexo;
				todos[j] = pessoa;
				printf("%s", pessoa);
				j++;
			}
		}
	}
	tam = strlen(todos);
	for(i = 0; i <= tam; i++)
	{
		printf("%s", todos[i]);
		printf("\n");
	}
	getch();
	return 0;
}
