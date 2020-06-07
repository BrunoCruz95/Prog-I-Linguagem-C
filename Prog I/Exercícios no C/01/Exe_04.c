// BRUNO DE SOUZA CRUZ
// MOSTRANDO NUMEROS EM ORDEM CRESCENTE

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2;
	
	printf("Digite um numero: ");
	scanf("%i", &n1);
	printf("Digite outro numero: ");
	scanf("%i", &n2);
	
	if (n1 > n2){
		printf("%i, %i", n2, n1);
	}
	else{
		printf("%i, %i", n1, n2);
	}
	getch();
	return 0;
}