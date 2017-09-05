/*algoritmo aula15exer1;
// Aluno: Lucas Hiroshi Horinouchi
// Matricula: 160034591
// Síntese
//  Objetivo: Mostrar a media de(os) aluno(s) de uma turma
//  Entrada : notas e nome
//  Saída   : media e nome
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define QUANTIDADE 5

float calculaMedia(float *temperaturas);
void verificaMediaMaior(float temperaturas[], float *media);
void verificaMediaIgual(float temperaturas[], float *media);

int main() 
{
	// Declarações
	int aux;
	float temperaturas[QUANTIDADE], media;
	// Instruções
	for (aux=0;aux<QUANTIDADE;aux++)
	{
	printf("Digite a temperatura do %i dia\n",aux+1);
	scanf("%f",&temperaturas[aux]);
	}
	system("cls");
	media = calculaMedia(temperaturas);
	media = media/QUANTIDADE;
	verificaMediaMaior(temperaturas, &media);
	verificaMediaIgual(temperaturas, &media);
	

	return 0;
}


// ========== SUBPROGRAMAS ============
//Objetivo: recebe o nome do aluno
//Parametros: nome
//Retorno: sem retorno
float calculaMedia(float *temperaturas) {
	
	int aux;
	float media = 0;
	
	for (aux=0;aux<QUANTIDADE;aux++)
	{
	media = media + temperaturas[aux];
	}
	return media;
}


//Objetivo: validar o nome
//Parametros: nome
//Retorno: situacao do nome (1=valido ou 0=invalida)
void verificaMediaMaior(float temperaturas[], float *media)
{
	int aux;
	
	puts("Nos seguintes dias houve uma temperatura maior que a media:\n");
	for (aux=0;aux<QUANTIDADE;aux++)
	{
	if (temperaturas[aux]>*media)
		printf("Dia %i Temperatura %.2f\n",aux+1,temperaturas[aux]);
	}

}


//Objetivo: receber as notas
//Parametros: notas
//Retorno: sem retorno
void verificaMediaIgual(float temperaturas[], float *media)
{
	
	int aux;
	int contador = 0;
	puts("\n\n\nNos seguintes dias houve uma temperatura igual a media:\n");
	for(aux=0;aux<QUANTIDADE;aux++)
	{
		if (temperaturas[aux]== *media)
		{
			printf("Dia %i ",aux+1);
			contador = contador + 1;
		}
	}
	if (contador==0)
		puts("Nao houve dias com temperatura igual a media");
}


