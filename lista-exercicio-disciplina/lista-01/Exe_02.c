// BRUNO DE SOUZA CRUZ
// MOSTRANDO O SEXO F/M

#include <stdio.h>
#include <stdlib.h>

int main(){
	char letra;
	
	printf("Digite uma letra: ");
	scanf("%c", &letra);
	
	if (letra == 'f'){
		printf("Sexo: feminino\n");
	}
	else if (letra == 'm'){
		printf("Sexo: masculino\n");
	}
	getch();
	return 0;
}