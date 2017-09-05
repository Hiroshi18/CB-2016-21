/*algoritmo aula12exer10;
// Aluno: Lucas Hiroshi Horinouchi
// Matricula: 160034591
// Síntese
//  Objetivo: Mostrar a quantidade zeros na matriz
//  Entrada : sem entrada
//  Saída   : quantidade de zeros
*/

#include <stdio.h>
#include <stdlib.h>
#define LINHA 3
#define COLUNA 4
#define DIMENSAO 2

int main() 
{
	// Declarações
	int matriz[LINHA][COLUNA][DIMENSAO] = {{{1,5},{2,6},{3,7},{4,8}},{{3,7},{4,9}, {5,4},{6,5}},{{1,0},{0,6},{6,7},{7,8}}};
	int aux1,aux2,aux3,zeros;
	// Instruções
	zeros=0;
	for(aux1=0;aux1<LINHA;aux1++)
	{
		for(aux2=0;aux2<COLUNA;aux2++)
		{
			for(aux3=0;aux3<DIMENSAO;aux3++)
			{
				if(matriz[aux1][aux2][aux3]==0)
				{
					printf("Temos zero na posicao %i%i%i\n",aux1,aux2,aux3);
					zeros = zeros+1;
				}
				
			}
		}
	}
	if(zeros==0)
		printf("Nao temos zeros na matriz");
	return 0;
}

