// BRUNO DE SOUZA CRUZ
// MOSTRANDO O RESULTADO DA SOMA CASO SEJA MAIOR QUE 10

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2, soma;
	
	printf("Digite um numero: ");
	scanf("%i", &n1);
	printf("Digite mais um numero: ");
	scanf("%i", &n2);
	
	soma = n1 + n2;
	if ((n1+n2)>10){
		printf("%i",soma);
	}
	getch();
	return 0;
}