/*algoritmo aula14exer3;
// Aluno: Lucas Hiroshi Horinouchi
// Matricula: 160034591
// Síntese
//  Objetivo: Apresentar o salario de 3 funcionarios em ordem
//  Entrada : salarios dos 3 funcionarios
//  Saída   : salarios em ordem
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() 
{
	// Declarações
	float salario[3];
	void funcaoTroca(float salario[]);
	int aux;
	// Instruções
	for(aux=0;aux<3;aux++)
	{
		do
		{
			printf("Digite o salario do %i funcionario\n",aux+1);
			scanf("%f",&salario[aux]);
		}
		while(salario[aux]<=0);
	}
	funcaoTroca(salario);
	printf("Salario Ordenados\n");
	for(aux=0;aux<3;aux++)
	{
		printf("%.2f ",salario[aux]);
	}
	return 0;
}

// ========== SUBPROGRAMAS ============
//Objetivo: ordenar os salario
//Parametros: vetor salarios
//Retorno: sem retorno
void funcaoTroca(float salario[])
{
	// Declarações
	int aux, aux1;
	float temp;
	// Instruções
	for(aux=0;aux<3;aux++)
	{
    for(aux1=aux+1;aux1<3;aux1++) 
    {
      if ( salario[aux1] > salario[aux])
      {
		temp = salario[aux1];
        salario[aux1] = salario[aux];
        salario[aux] = temp;
      }
    }
  }
}
