#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int menu();
int main()
{
	int opcao = 0;
	opcao = menu();
	switch (opcao)
	{
	case 1: {
		printf("\n Foi selecionada a opção 'Abri ficheiro'!\n");
		system("pause");
		break;
	}
	case 2: {
		printf("\n Foi selecionada a opção 'Abri ficheiro'!\n");
		system("pause");
		break;
	}
	case 3: {
		printf("\n Foi selecionada a opção 'Abri ficheiro'!\n");
		system("pause");
		break;
	}
	case 4: {
		printf("\n Foi selecionada a opção 'Abri ficheiro'!\n");
		system("pause");
		break;
	}
	case 5: {
		printf("\n Foi selecionada a opção 'Abri ficheiro'!\n");
		system("pause");
		break;
	}
	case 6: {
		printf("\n Foi selecionada a op%c%co 'Sair'!\n",135, 198);
		printf("\n\n\n");
		system("pause");
		exit(1);
		break;
	}
	default: {
		printf("\n Foi selecionada a opção 'Abri ficheiro'!\n");
		break;
	}
	}

	return 0;
}

int menu()
{
	int op;
	do
	{
		system("cls");
		printf("\n MENU \n");
		printf("\n 1- Abrir ficheiro");
		printf("\n 2- Retifica%c%co de meia onda",135,198);
		printf("\n 3- Retifica%c%co de onda completa",135,198);
		printf("\n 4- Filtro RC");
		printf("\n 5- Gravar resultados");
		printf("\n 6- Sair");
		printf("\n Escolher uma op%c%co de 1 a 6: ",135,198);
		scanf(" %d", &op);
	} while ((op < 1) || (op > 6));
	return op;
}
/*

int main()
{
	FILE* fL;
	FILE* fE;
	int i, n_valores, teste=0;
	float valor_lido, valor_escrito;
	fL = fopen("C:\\PC\\FICH\\Leitura.txt", "r");
	if (fL == NULL)
	{
		printf("\nNao foi possivel abrir o ficherio'Leitura.txt'!\n");
			fclose(fL);
			exit(1);
	}
	fE = fopen("C:\\PC\\FICH\\Escrita.txt", "w");
	if (fE == NULL)
	{
		printf("\nNao foi possivel abrir o ficheiro 'Escrita.txt!\n");
			fclose(fE);
			exit(1);
	}
	fscanf(fL,"%d", &n_valores);
	fprintf(fE,"%d\n", n_valores);
	printf("%d\n", n_valores);
	for (i = 0;i < n_valores;i++)
	{
		fscanf(fL, "%f",&valor_lido);
		valor_escrito = 3 * valor_lido;
		fprintf(fE, "%f\n", valor_escrito);
		printf("%f\n", valor_escrito);
	}
	fclose(fL);
	fclose(fE);
	printf("\n\n\n");
	system("pause");
	return 0;
}
*/
