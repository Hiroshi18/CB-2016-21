/*algoritmo aula12exer13;
// Aluno: Lucas Hiroshi Horinouchi
// Matricula: 160034591
// Síntese
//  Objetivo: criar arquivo
//  Entrada : nome do arquivo
//  Saída   : mensagem criacao do arquivo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TOTAL 99

struct canditados
{
    char nome[TOTAL];
    int numero;
};

int validaNumero(FILE *ponteiro , int contador);

int main(void)
{
// Declarações
	
    int aux,contador=0;
    struct canditados candidato;
    FILE *ponteiro;
    char continua;
// Instruções
	ponteiro = fopen("candidatos.bin","wb");
	do
	{
    	system("cls");
    	printf("Digite o nome, ou ENTER para sair\n");
		fgets(candidato.nome, TOTAL, stdin);
    	if(candidato.nome[strlen(candidato.nome)-1]=='\n')
			candidato.nome[strlen(candidato.nome)-1]='\0';
		if(candidato.nome[0] != '\0')
		{
	    	do
    		{
    		fflush(stdin);
	    	puts("Digite o numero do candidato:");
	    	scanf("%d",&candidato.numero);
	    	}while (!validaNumero(&ponteiro, contador));
	    	fflush(stdin);
			fwrite(&candidato, sizeof(candidato), 1 , ponteiro);
			contador++;
		}
	}while(candidato.nome[0] != '\0' && contador<+TOTAL);
	fclose(ponteiro);
	ponteiro = fopen("candidatos.bin","rb");
	puts("Nome             Numero");
	for (aux=0; contador!=aux;  aux++)
    {                    
    	fread(&candidato,sizeof(candidato),1,ponteiro);
        printf("%s             %d\n", candidato.nome, candidato.numero);
    }
    fclose(ponteiro);
    return 0;
}


 
 //--------------------Subprogramas--------------------

//Objetivo: validar o numero
//Parametros:numero
//Retorno: situacao do nome(1=valido ou 0=invalida)
int validaNumero(FILE *ponteiro, int contador)
{
	int aux1,aux2;
	struct canditados candidatos, candidato[99];
	
	fread(&candidatos, sizeof(candidatos), 1, ponteiro);
	for(aux1=0;aux1<=contador;aux1++)
		candidato[aux1]= candidatos;
	
	
	
	for (aux1=0;aux1<contador;aux1++)
	{
		for (aux2=aux1+1;aux2<contador-1;aux2++)
		{
			if(candidato[aux1].numero==candidato[aux2].numero)
			{
				puts("Esse numero existe digite outro");
				return 1;
			}
		} 
	}
	return 0;
}
