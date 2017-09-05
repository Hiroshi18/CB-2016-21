/*algoritmo aula15exer5;
// Aluno: Lucas Hiroshi Horinouchi
// Matricula: 160034591
// Síntese
//  Objetivo: Cadastrar e imprimir as informacoes das cidades
//  Entrada : numero de cidades, numero de habitantes, nome da cidade, localizacao
//  Saída   : numero de habitantes, nome da cidade, localizacao
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXIMO 6000
#define MINIMO 0
#define MAXCARACTERES 80

typedef struct
{ 
	int coord_x;
	int coord_y; 
} coord;

struct cidade_dados
{
	char nomeCidade[MAXCARACTERES];
	int nroHabitantes;
	coord localizacao;
}; 

int validaNroCidades(int *numero) ;
void recebeNome(char nome[]);
int validaNome(char nomeCompleto[]);
void recebeNroHabitantes(int *nroHabitantes);
void recebeLocalizacao(coord *localizacao);
int validaNroHabitantes(int *numero);

int main() 
{
	// Declarações
	int nroCidades,aux;
	float media=0;
	// Instruções
	puts("Digite o numero de cidades");
	do{
	scanf("%d",&nroCidades);
	fflush(stdin);
	}while(!validaNroCidades(&nroCidades));
	
	struct cidade_dados cidade[nroCidades];
	for(aux=0; aux<nroCidades;aux++)
	{
		recebeNome(cidade[aux].nomeCidade);
		fflush(stdin);
		recebeNroHabitantes(&cidade[aux].nroHabitantes);
		fflush(stdin);
		recebeLocalizacao(&cidade[aux].localizacao);	
		system("cls");
		fflush(stdin);
	}
	for(aux=0; aux<nroCidades;aux++)
	{
		media = media + cidade[aux].nroHabitantes;	
	}
	media = media/nroCidades;
	printf("A media de habitantes: %f", media);
	for(aux=0; aux<nroCidades;aux++)
	{
		printf("\nNome Cidade: %s\n", cidade[aux].nomeCidade);
		if (cidade[aux].nroHabitantes==media)
			puts("O numero de habitantes e igual a media");
		if(cidade[aux].nroHabitantes>media)
			puts("O numero de habitantes e maior que a media");
		if(cidade[aux].nroHabitantes<media)
			puts("O numero de habitantes e menor que a media");
	printf("Numero de Habitantes: %ld\n",cidade[aux].nroHabitantes);
	printf("Coordenadas(%d , %d)\n",cidade[aux].localizacao.coord_x, cidade[aux].localizacao.coord_y);
	}
		
	return 0;
}

// ========== SUBPROGRAMAS ============
//Objetivo: recebe o nome
//Parametros: nome
//Retorno: sem retorno
void recebeNome(char nome[])
{
	puts("Digite o nome da cidade:");
	do
	{
		fgets(nome, MAXCARACTERES, stdin);
		if(nome[strlen(nome)-1]=='\n')
			nome[strlen(nome)-1]='\0';
	}while(validaNome(nome)==0);
}

//Objetivo: validar o nome
//Parametros: nome
//Retorno: situacao do nome (1=valido ou 0=invalida)
int validaNome(char nome[]) 
{
	if(strlen (nome)==0) 
	{
		puts("Digite um nome valido");
		return 0;
	}
	else
		return 1;
}

//Objetivo: validar o numero de cidades
//Parametros: numero de cidades
//Retorno: situacao do numero cidades (1=valido ou 0=invalida)
int validaNroCidades(int *numero) 
{
	if((*numero <= MINIMO)||(*numero > MAXIMO )) 
	{
		printf("Numero invalido digite um numero entre 0 e 6000\n");
		return 0;
	}
	else
		return 1;
}

//Objetivo: validar o numero
//Parametros: numero
//Retorno: situacao do numero (1=valido ou 0=invalida)
int validaNumero(int *numero) 
{
	if((*numero <= MINIMO)) 
	{
		printf("Numero invalido digite um numero maior que 0\n");
		return 0;
	}
	else
		return 1;
}

//Objetivo: receber o numero de habitantes
//Parametros: numero de habitantes
//Retorno: sem retorno
void recebeNroHabitantes(int *nroHabitantes)
{
	printf("Digite o numero de habitantes\n");
	do
	{
		scanf("%d",&*nroHabitantes);
	}while(validaNumero(&*nroHabitantes)==0);
}	
	
//Objetivo: receber a localizacao
//Parametros: localizacao
//Retorno: sem retorno
void recebeLocalizacao(coord *localizacao)
{
	do
	{
		printf("Digite a coordenada em X\n");
		scanf("%d",&localizacao->coord_x);
	}while(!validaNumero(&localizacao->coord_x));
	do
	{
		printf("Digite a coordenada em Y\n");
		scanf("%d",&localizacao->coord_y);
	}while(!validaNumero(&localizacao->coord_y));
}

