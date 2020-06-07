// BRUNO DE SOUZA CRUZ
// MOSTRANDO NUMEROS POSITIVOS

#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, pos;
	
	printf("Digite um numero: ");
	scanf("%i", &num);
	
	if (num>0){
		printf("%i\n", num);
	}
	else if(num<0){
		pos = (num * -1);
		printf("%i\n", pos);
	}
	getch();
	return 0;
}