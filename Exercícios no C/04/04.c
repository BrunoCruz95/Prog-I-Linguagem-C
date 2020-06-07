
void cir(float num)
{
	float area;

	area = 3.14159 * num * num;

	printf("Area = %.1f", area);
}

int main()
{
	float raio;

	printf("Digite: ");
	scanf("%f", &raio);

	cir(raio);

	getch();
	return 0;
}
