// BRUNO DE SOUZA CRUZ
// MOSTRANDO SE É PAR OU IMPAR

#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	
	printf("Digite um numero: ");
	scanf("%i", &num);
	
	if (num % 2 == 0){
		printf("O numero %i e PAR\n", num);
	}
	else{
		printf("O numero %i e IMPAR\n", num);
	}
	getch();
	return 0;
}