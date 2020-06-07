#include <stdio.h>


struct horario
{
	int horas;
	int minutos;
	int segundos;
} agora;

int main()
{
	int i;

	printf("Hora: ");
	scanf("%d", &agora.horas);
	printf("Minutos: ");
	scanf("%d", &agora.minutos);
	printf("Segundos: ");
	scanf("%d", &agora.segundos);

	printf("\n%d : %d : %d",  agora.horas, agora.minutos, agora.segundos);

	getch();
	return 0;
}
