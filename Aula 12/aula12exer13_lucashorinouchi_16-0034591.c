/*algoritmo aula12exer13;
// Aluno: Lucas Hiroshi Horinouchi
// Matricula: 160034591
// Síntese
//  Objetivo: Armazenar e mostrar os modelos identificados
//  Entrada : modelos dos carros
//  Saída   : relatorio com os modelos entrados e modelos idenrificados
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.c>


int main() 
{
	// Declarações
	int numero1,numero2,numero3;
	// Instruções
	scanf("%i",&numero1);
	scanf("%i",&numero2);
	scanf("%i",&numero3);
	
	if(numero1>numero2 && numero1>numero3)
		printf("%i",numero1);
	else if (numero2>numero1 && numero2>numero3)
			printf("%i",numero2);
		else
			printf("%i",numero3);
}

