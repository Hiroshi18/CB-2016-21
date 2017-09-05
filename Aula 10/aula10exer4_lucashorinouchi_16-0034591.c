/*algoritmo aula10exer4;
// Aluno: Lucas Hiroshi Horinouchi
// Matricula: 160034591
// S�ntese
//  Objetivo: Calcular e mostrar uma pot�ncia
//  Entrada : sexo e altura
//  Sa�da   : media, maior e menor altura, numero de homens
*/

#include <stdio.h>
#include <stdlib.h>
#define LINHA 4
#define COLUNA 4

int main() 
{
	// Declara��es
	int matriz[LINHA][COLUNA];
	int auxLinha, auxColuna, diagonal;
	int calculaDiagonal(int matriz[][COLUNA]);
	// Instru��es
	auxLinha=0;
	do{
		for  (auxColuna=0; auxColuna < COLUNA; auxColuna++)
		{
			printf("Informe os numero da %i linha, coluna %i\n",auxLinha+1, auxColuna+1);
			scanf("%i",&matriz[auxLinha][auxColuna]);
		}
		auxLinha++;
	}while(auxLinha!=LINHA);
	diagonal = calculaDiagonal(matriz);
	printf("O valor da multiplicacao da diagonal e: %i",diagonal);
	return 0;
}
//=================Subalgoritmos=================

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


