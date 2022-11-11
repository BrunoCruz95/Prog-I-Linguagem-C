// Bruno Cruz && Matheus Holanda
// PROGRAMA AGENDA

#define max 3 // UMA CONSTANTE DO NÚMERO DE CONTATOS POSSIVEIS PARA SALVAR

#include <stdio.h>
#include <string.h>

// ESTRUTURA QUE CONTEM NÚMERO, NOME.
struct pessoa
{
	char numero[10];
	char nome[65];
};
struct agenda
{
	struct pessoa contatos[max];
} ;
struct agenda Ag;
// FUNÇÃO QUE ADICIONA CONTATOS
void adicionar()
{
	int i;
	for (i = 0; i < max ; i++)
	{
		printf("\n__________________________________________\n");
		printf("\nNome: ");
		scanf("%s", &Ag.contatos[i].nome);
		printf("Numero: ");
		scanf("%s", &Ag.contatos[i].numero);
	}
	return;
}
// FUNÇÃO QUE MOSTRA OS CONTATOS SALVOS
void listar()
{
	int i;
	printf("\n__________________________________________\n\n");
	printf("\tContatos\tNumeros\n");
	printf("__________________________________________\n\n");
	for (i = 0; i < max; i++)
	{
		printf ("\t%s\t\t", Ag.contatos[i].nome);
		printf ("%s\n", Ag.contatos[i].numero);
	}
	printf("__________________________________________\n\n");
	getch();
	return;
}
// FUNÇÃO QUE BUSCA UM CONTATO SALVO
void buscar()
{
	int i = 0, achei, cont = 0;
	char procura[65];

	printf("\nQual o nome deseja Buscar? ");
	scanf("%s", &procura);

	for(i = 0; i < max; i++)
	{
		achei = strcmp( Ag.contatos[i].nome , procura); // VARIAVEL RECEBI O VALOR DE COMPARAÇÃO
		if(achei == 0)
		{
			printf("\nNome : %s\n", Ag.contatos[i].nome);
			printf("Telefone : %s\n", Ag.contatos[i].numero);
			cont++;	// SE A CONDIÇÃO FOR ACEITA O cont FICA COM VALOR 1
		}
	}
	// SE O cont FOR 0 ISSO QUER DIZER QUE ELE NÃO ENTROU NENHUMA VEZ NA CONDIÇÃO ACIMA
	if(cont == 0)
	{
		printf("\nO nome nao existe na Agenda.\n");
	}
	getch();
	return;
}
// FUNÇÃO QUE CONTEM O MENU
void menu()
{

	system("cls");
	printf("\n        Bem-Vindo ao Programa AGENDA     \n");
	printf("\n                |-MENU-|                 ");
	printf("\n__________________________________________\n\n");
	printf("\t[ 1 ] - Adicionar contato\n");
	printf("\t[ 2 ] - Listar contatos\n");
	printf("\t[ 3 ] - Buscar contato\n");
	printf("\t[ 4 ] - Sair\n");
	printf("__________________________________________\n\n");

	printf("Escolha: ");

}
// FUNÇÃO PRINCIPAL
int main()
{
	int op;
	do
	{
		menu();
		scanf("%i", &op);               // LER A OPÇÃO QUE O USÚARIO DIGITOU

		switch(op)                      // ESCOLLHA
		{
		case 1:                         // ADICIONANDO UM CONTATO
			adicionar();
			break;
		case 2:							// LISTANDO CONTATOS DA AGENDA
			listar();
			break;
		case 3:							// BUSCANDO CONTATO ESPECIFICO DA AGENDA
			buscar();
			break;
		case 4:							// FINALIZANDO O PROGRAMA
			printf("\nFinalizando...\n\n");
			exit(0);
		default:						// OPÇÃO < 1 OU > 4
			printf("\nOPCAO INVALIDA !\n\n");
			system("pause");
		}
	}
	while(op != 4); 					// CODIÇÃO ENQUANTO O op FOR DIFERENTE DE 4 ELE CONTINUARAR NO Loop
	return 0;
}
