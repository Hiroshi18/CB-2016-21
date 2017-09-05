/*algoritmo aula9exer2;
// Aluno: Lucas Hiroshi Horinouchi
// Matricula: 160034591
// Síntese
//  Objetivo: Apresentar o maior numero entre 3
//  Entrada : 3 numeros
//  Saída   : maior numero


principal
	// Declarações
	inteiro numero1, numero2, numero3;

	// Instruções
	escreval("Digite o primeiro numero:");
	leia (numero1);
	escreval("Digite o segundo numero:");
	leia (numero2);
	escreval("Digite o terceiro numero:");
	leia (numero3);
	limpaTela();
	se ((numero1>numero2) e (numero1>numero3))entao
		escreval(numero1);
	senao
		se((numero2>numero1) e (numero2>numero3))entao
			escreval(numero2);
		senao
			se((numero3>numero1) e (numero3>numero2))entao
				escreval(numero3);
			fimSe
		fimSe
	fimSe
fimPrincipal
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.c>


int main() 
{	
	// Declarações
	int numero1, numero2, numero3;

	// Instruções
	printf("Digite o primeiro numero:");
	scanf ("%i",&numero1);
	printf("Digite o segundo numero:");
	scanf ("%i",&numero2);
	printf("Digite o terceiro numero:");
	scanf ("%i",&numero3);
	system("cls");
	if ((numero1>numero2) && (numero1>numero3))
	{
		gotoxy(40,12);
		printf("%i",numero1);
	}
	else if((numero2>numero1) && (numero2>numero3))
		{
			gotoxy(40,12);
			printf("%i",numero2);
		}
		else if((numero3>numero1) && (numero3>numero2))
			{
				gotoxy(40,12);
				printf("%i",numero3);
			}
	return 0;
}

