// BRUNO DE SOUZA CRUZ
// MOSTRANDO O AUMENTO DE 15%, 10%, 5%

#include <stdio.h>
#include <stdlib.h>

int main(){
	int salario, novo, p;
	
	printf("Digite seu salario: ");
	scanf("%i", &salario);
	
	if (salario < 500){
		novo = salario + (salario * 0.15);
		p = 15;
	}
	else if ((salario >= 500) && (salario <= 1000)){
		novo = salario + (salario * 0.10);
		p = 10;
	}
	else if (salario > 1000){
		novo = salario + (salario * 0.05);
		p = 5;
	}
	printf("\nSeu salario e: %i\nCom o aumento de %i%%\nSeu novo salario e: %i\n", salario, p, novo);
	getch();
	return 0;
}