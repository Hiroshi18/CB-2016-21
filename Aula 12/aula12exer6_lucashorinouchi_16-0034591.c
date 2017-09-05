/*algoritmo aula12exer6;
// Aluno: Lucas Hiroshi Horinouchi
// Matricula: 160034591
// Síntese
//  Objetivo: Mostrar a quantidade de casas de um numero
//  Entrada : Caracteres 
//  Saída   : string e valor duplicado da string
*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	// Declarações
	char caracteres[30];
	int aux;
	// Instruções
	for (aux = 0; aux<=29; aux++)
	{
		caracteres[aux]=getche();
	}
	for(aux = 29; aux>=0; aux--)
		printf("%c\n\n",caracteres[aux]);
		getch();
	return 0;
}

