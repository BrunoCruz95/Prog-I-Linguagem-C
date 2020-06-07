// BRUNO DE SOUZA CRUZ
// CALCULADORA

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2, opcao, resultado;
	
	printf("\n[ 1 ] - Soma\n[ 2 ] - Subtrair\n[ 3 ] - Dividir\n[ 4 ] - Multiplicar\n");
	printf("\nOpcao: ");
	scanf("%i", &opcao);
	system("cls");
	printf("Digite o primeiro numero: ");
	scanf("%i", &n1);
	printf("Digite o segundo numero: ");
	scanf("%i", &n2);
	system("cls");
	switch (opcao){
		case 1:
			resultado = n1 + n2;
			printf("\n\t%i + %i = %i\n", n1, n2, resultado);
			break;
		case 2:
			resultado = n1 - n2;
			printf("\n\t%i - %i = %i\n", n1, n2, resultado);
			break;
		case 3:
			if (n2 == 0){
				printf("\n\tValor invalido !\n");
				break;
			}
			else{
				resultado = n1 / n2;
				printf("\n\t%i / %i = %i\n", n1, n2, resultado);
				break;
			}
		case 4:
			resultado = n1 * n2;
			printf("\n\t%i x %i = %i\n", n1, n2, resultado);
			break;
	}
	getch();
	return 0;	
}