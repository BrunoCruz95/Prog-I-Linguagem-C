
#include <stdio.h>
#include <conio.h>
#include <string.h>

main()
{
	char alunos[3][30];
	float notas[3][4], medias[1][3];
	int i;

	for(i = 0; i < 3; i++)
	{
		printf("Aluno %d: ", i + 1);
		scanf("%s", alunos[i]);

		printf("Nota 1: ");
		scanf("%f", &notas[i][1]);
		printf("Nota 2: ");
		scanf("%f", &notas[i][2]);
		printf("Nota 3: ");
		scanf("%f", &notas[i][3]);
		medias[1][i] = (notas[i][1] + notas[i][2] + notas[i][3]) / 3;
		printf("\n");
	}
	printf("----------------------------------------\n");
	for(i = 0; i < 3; i++)
	{
		printf("Aluno : ");
		puts(alunos[i]);
		printf("Media : %.1f\n", medias[1][i]);
		printf("----------------------------------------\n");
	}
	getch();
	return 0;
}

