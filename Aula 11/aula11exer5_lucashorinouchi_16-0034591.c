/*algoritmo aula12exer11;
// Aluno: Lucas Hiroshi Horinouchi
// Matricula: 160034591
// Síntese
//  Objetivo: Calcular e mostra multiplicacao da diagonal de uma matriz
//  Entrada : matriz
//  Saída   : multiplicacao da diagonal
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.c>
#define LINHA 3
#define COLUNA 30

int main() 
{
	// Declarações
	char matriz[LINHA][COLUNA];// omega[COLUNA],vectra[COLUNA],silverado[COLUNA];
	int linha,aux;
	// Instruções
	for(linha=0;linha<LINHA;linha++)
	{
		printf("Digite o modelo do %i carro:",linha+1);
		scanf("%s",matriz[linha]);
		fflush(stdin);
	}
	system("cls");
	puts("CARROS SOLICITADOS");
	for(aux=0; aux<LINHA; aux++)
		printf("%i- %s\n",aux+1,matriz[aux]);
	for(aux=0;aux<LINHA;aux++)
	{
		gotoxy(aux,50);
		if (strcmp(matriz[aux], "astra")==0 || strcmp(matriz[aux], "omega")==0 ||strcmp(matriz[aux], "vectra")==0 || strcmp(matriz[aux], "silverado")==0)
			puts(matriz[aux]);
		else
			puts("Indisponivel");
	}
}

