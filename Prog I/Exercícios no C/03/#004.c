#include <stdio.h>
#include <string.h>


int main()
{
	int vetor[10], aux, i, j;

	for(i = 0; i < 10; i++)
	{
		printf("Digite: ");
		scanf("%d", &vetor[i]);
	}
	for(i = 0; i < 10; i++){
		for(j = i + 1; j < 10; j++){
			if(vetor[i] > vetor[j]){
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
	}
	printf("\n");
	for(i = 0; i < 10; i++){
		printf("%d ", vetor[i]);
	}
	getch();
	return 0;
}
