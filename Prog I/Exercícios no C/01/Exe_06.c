// BRUNO DE SOUZA CRUZ
// MOSTRANDO SE É NULO, POSITOVO OU NEGATIVO

#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	
	printf("Digite um numero: ");
	scanf("%i", &num);
	
	if (num == 0){
		printf("Nulo\n");
	}
	else if (num > 0){
		printf("Positivo\n");
	}
	else{
		printf("Negativo\n");
	}
	getch();
	return 0;
}