#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
	int senha1 = 2468, senha;
	do
	{
		printf("Digite uma senha: ");
		scanf("%i", &senha);
		system("cls");
	}
	while (senha1 != senha);

	printf("\nAcertou !\nA senha era : %i \n", senha);

	getchar();
	return 0;
}
