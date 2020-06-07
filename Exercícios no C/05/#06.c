#include <stdlib.h>
#include <string.h>

char* inverteString(char string[]);

int main()
{
	char string[30], *invertida;

	printf("Digite um string: ");
	scanf("%s", string);

	invertida = inverteString(string);

	if(invertida == NULL)
	{
		printf("Memoria insuficiente\n");
	}
	else
	{
		printf("\nString: %s\n", string);
		printf("Invertida: %s\n", invertida);
	}

	free(invertida);
	return 0;
}
char* inverteString(char string[])
{
	int tam = strlen(string), i;
	char *invertida = (char*) malloc(sizeof (char) * tam);

	if(invertida == NULL)
	{
		return NULL;
	}
	for(i = 0; i < tam; i++)
	{
		invertida[i] = string[tam - 1 - i];
	}
	return invertida;
}
