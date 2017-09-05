/*algoritmo aula16exerExtra1;
// Aluno: Lucas Hiroshi Horinouchi
// Matricula: 160034591
// Síntese
//  Objetivo: armazenar e mostrar o DDD e o nome de algumas cidades
//  Entrada : DDD, nome da cidade
//  Saída   : relatorio com o DDD e o nome de cada cidade
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define MAXCARACTERES 80
#define MAX 30

struct dados_cidade
{ 
	char nome[MAX]; 
	int ddd; 
}; 

int main (void) 
{ 
	struct dados_cidade cidade[MAX]; 
	int aux, registroLidos, i = 0; 
	FILE *p_arq; 
	if ((p_arq=fopen("Local.bin","wb"))==NULL) 
	{ 
		puts("Arquivo nao pode ser aberto."); 
		getch(); 
		exit(1); 
	} 
	else 
	{ 
		puts("Informe o DDD da cidade: "); 
		scanf("%d",&cidade[i].ddd);
		while ((cidade[i].ddd>0)&&(i<MAX)) 
		{ 
			fflush(stdin); 
			do 
			{ 
				puts("Informe o nome da cidade: "); 
				fgets(cidade[i].nome,MAX,stdin); 
				if(cidade[i].nome[MAX-1] == '\n') 
					cidade[i].nome[MAX-1] = '\0'; 
			}while(strlen(cidade[i].nome)==0); 
			fwrite(&cidade[i], sizeof(cidade[i]), 1, p_arq); 
			i++; 
			puts("Informe o DDD da cidade: "); 
			scanf("%d",&cidade[i].ddd); 
		} // fim do while 
	} // fim do else 
	system("cls");
	printf("DDD             Nome Cidade\n\n");
	for (aux = i-1; aux>=0; aux--)
	{
		printf("%d              %s", cidade[aux].ddd, cidade[aux].nome);
	}
	registroLidos =	fread(&cidade[i], sizeof(cidade[i]), sizeof i, p_arq);
	printf("\n\n\n");
		if(registroLidos=i)
			puts("Foram lidos todos os registros");
		else
			puts("Ocorreu um problema na leitura dos registros");
	fclose(p_arq); 
} // fim do programa 
