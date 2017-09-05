/*algoritmo aula12exer3;
// Aluno: Lucas Hiroshi Horinouchi
// Matricula: 160034591
// Síntese
//  Objetivo: Mostrar a ordem inversa das letras 
//  Entrada : letras
//  Saída   : Letras em ordem inversa
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() 
{
	// Declarações
	char caracteres[30];
	int aux;
	// Instruções
	for (aux = 0; aux<=29; aux++)
	{
		printf("\nDigite a %i letra\n",aux+1);
		caracteres[aux]=getche();
		while (!isalpha(caracteres[aux])){
			printf("\nEsse caracter nao e uma letra digite novamente:\n");
			caracteres[aux]=getche();
			system("cls");
		}
	}
	printf("As letras na ordem inversa da entrada:");
	for(aux = 29; aux>=0; aux--)
		printf("%c\n\n",caracteres[aux]);
		getch();
	return 0;
}

