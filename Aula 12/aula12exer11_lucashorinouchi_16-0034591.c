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
#define LINHA 2
#define COLUNA 5

int main() 
{
	// Declarações
	char matriz[LINHA][COLUNA];
	int auxLinha, auxColuna, diagonal;
	// Instruções
	auxLinha=0;
	do{
		printf("Informe o %i modelo digite ENTER para finalizar\n",auxLinha+1);
		for  (auxColuna=0; auxColuna < COLUNA; auxColuna++)
		{
			if(matriz[auxLinha][auxColuna] != 13)
			{
				matriz[auxLinha][auxColuna] = getche();
			}
			else
			{
			for  (;auxColuna < COLUNA; auxColuna++)
				matriz[auxLinha][auxColuna]='\0';
			}
		}
		auxLinha++;
	}while(auxLinha!=LINHA);
	
	auxLinha=0;
	do{
		for  (auxColuna=0; auxColuna < COLUNA; auxColuna++)
		{
			printf("%c",matriz[auxLinha][auxColuna]);
		}
		auxLinha++;
	}while(auxLinha!=LINHA);
	return 0;
}
//=================Subalgoritmos=================
/*
// Objetivo: calcular a multiplicacoo dos elementos da diagonal
// Parametro: matriz
// Retorna: multiplicacao da diagonal

int calculaDiagonal(int matriz[][COLUNA])
{

	// Declaracoes
	int auxLinha, auxColuna, diagonal;
	// Instrucoes
	diagonal = (matriz[0][0]);
	for(auxLinha=1; auxLinha<LINHA; auxLinha++)
	{
		for(auxColuna=1; auxColuna<COLUNA; auxColuna++)
		{
			if(auxLinha==auxColuna)
			{
				diagonal= diagonal*matriz[auxLinha][auxColuna];
			}
		}
	}
	
	return diagonal;
}
*/

