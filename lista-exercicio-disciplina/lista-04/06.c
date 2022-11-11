

void alto(float vetor)
{
	float maiorId = 0, maiorAl = 0;
	int i, novo[4];
	for(i = 0; i < 5; i++)
	{
		if(i == 0)
		{
			maiorId = vetor[i][3];
			maiorAl = vetor[i][2];
			novo[i] = vetor[i];
		}
		else if(vetor[i][3] > maiorAl || vetor[i][2] > maiorId)
		{
			maiorId = vetor[i][3];
			maiorAl = vetor[i][2];
			novo[i] = vetor[i];
		}
	}
	return novo;
}
int main()
{
	char nome[30], esporte[10];
	int idade, i, j = 0, vetor[5][4];
	float altura;

	for(i = 0; i < 5; i++)
	{
		printf("Nome: ");
		scanf("%[^\n]", nome);
		vetor[i][j] = nome;
		j++;
		printf("Esporte: ");
		scanf("%[^\n]", esporte);
		vetor[i][j] = esporte;
		j++;
		printf("Idade: ");
		scanf("%d", &idade);
		vetor[i][j] = idade;
		j++;
		printf("Altura: ");
		scanf("%f", &altura);
		vetor[i][j] = altura;
		j = 0;
	}
	novo = alto(vetor);
	printf("%d", novo);
}
