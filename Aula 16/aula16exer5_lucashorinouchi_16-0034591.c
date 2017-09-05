// Sintese
//   Objetivo: Gerenciar o cadastro de candidatos a eleição
//   Entrada:  Nome e número da legenda
//   Saída:    Nomes e números da legenda únicos candidatos

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.c>
#include <locale.h>
#define MAXIMO 50

void validaNome(char *nome);
float validaNumero(float *numero);
void corrigeString(char *string);

int main() {
	// Declarações
	float *pAlunosNota1, *pAlunosNota2;
	int contador = 0,aux = 1;
	char *pAlunosNome;
	
	// Instruções
	setlocale(LC_ALL,"portuguese");
	pAlunosNome = (char *) malloc (aux*MAXIMO*sizeof(char));
	pAlunosNota1 = (float *) malloc (aux*sizeof(float));
	pAlunosNota2 = (float *) malloc (aux*sizeof(float));

		aux++;
		if((pAlunosNome = (char *) realloc (pAlunosNome, aux*MAXIMO*sizeof(char)))==NULL)
		{
			printf("** Memoria insuficiente **");
			getch();
			exit(1);
		}
		if((pAlunosNota1 = (float *) realloc (pAlunosNota1, aux*sizeof(float)))==NULL)
		{
			printf("** Memoria insuficiente **");
			getch();
			exit(1);
		}
		if((pAlunosNota2 = (float *) realloc (pAlunosNota2, aux*sizeof(float)))==NULL)
		{
			printf("** Memoria insuficiente **");
			getch();
			exit(1);
		}
		
		puts("Digite o nome do Aluno ou ENTER para listar os cadastrados ate agora:");
		fgets(&pAlunosNome[contador], MAXIMO, stdin);
    	if(pAlunosNome[strlen(pAlunosNome)-1]=='\n')
			pAlunosNome[strlen(pAlunosNome)-1]='\0';	
		if(pAlunosNome[0] != '\0')
		{
    		fflush(stdin);
	    	puts("Digite a nota das prova 1:");
	    	do{
	    		scanf("%f",&pAlunosNota1[contador]);
	    	}while(!validaNumero(&pAlunosNota1[contador]));
	    	puts("Digite a nota das prova 2:");
	    	do{
	    		scanf("%f",&pAlunosNota2[contador]);
	    	}while(!validaNumero(&pAlunosNota2[contador]));
			fflush(stdin);
		}
		aux++;
		contador++;
	free(pAlunosNome);
	free(pAlunosNota1);
	free(pAlunosNota2);
}

// ========== SUBPROGRAMAS ==========

// Objetivo: Validar nome
// Parâmetros: Nome
// Retorno: nenhum
void validaNome(char *nome){
	// Instrucoes
	while(nome[0] != '\0' && (strlen(nome) < 3 || strstr(nome," ") == NULL)){
		printf("Nome inválido. Digite novamente: ");
		fgets(nome,MAXIMO,stdin);
		corrigeString(nome);
	}
}

// Objetivo: Consertar string
// Parâmetros: string
// Retorno: nenhum
void corrigeString(char *string){
	// Instrucoes
		fflush(stdin);
		if(string[strlen(string)-1] == '\n')
		  string[strlen(string)-1] = '\0';
}

// Objetivo: Validar número
// Parâmetros: número
// Retorno: número validado
float validaNumero(float *numero){
	// Instruções
	while(*numero < 0 || *numero > 10){
		printf("Numero inválido, digite novamente: ");
		scanf("%f",&numero);
	}
	return *numero;
}

