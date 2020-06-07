#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
	int n1;

	printf("Digite um numero: ");
	scanf("%i", &n1);

	printf("Antecessor: %i\nSucessor: %i\n", n1 - 1, n1 + 1);
	getch ();
	return 0;
}
