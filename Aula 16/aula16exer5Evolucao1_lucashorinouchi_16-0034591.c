// Sintese
//   Objetivo: Gerenciar o cadastro de candidatos a elei��o
//   Entrada:  Nome e n�mero da legenda
//   Sa�da:    Nomes e n�meros da legenda �nicos candidatos

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define MAXIMO 50
#define MAX 99

typedef struct{
	int numero;
	char nome[MAXIMO]; 
} candidatos;

int contaCandidatos();
void validaNome(char *nome);
int validaNumero(int numero);
void imprimeCandidatos();
int comparaNumero(int numero);
void corrigeString(char *string);

int main() {
	// Declara��es
	candidatos candidato;
	FILE *pCandidato;
	int qtdCandidatos;

	// Instru��es
	setlocale(LC_ALL,"portuguese");
	qtdCandidatos= contaCandidatos();
	if ((pCandidato= fopen("candidatos.bin","ab")) == NULL) {
		puts("Arquivo nao pode ser aberto.");
		getch();
		exit(1);
	}else{
		fclose(pCandidato);
		while(qtdCandidatos < MAX) {
			printf("Quantidade de candidatos cadastrados = %d\n\n",qtdCandidatos);
			printf("Digite o nome do candidato ou pressione a tecla ENTER para sair do cadastro: ");
			fgets(candidato.nome,MAXIMO,stdin);
			corrigeString(candidato.nome);
			validaNome(candidato.nome);
			if(candidato.nome[0] != '\0')
			{
				pCandidato= fopen("candidatos.bin","ab");
				do
				{
					printf("Digite o n�mero do candidato: ");
					scanf("%d",&candidato.numero);
					candidato.numero = validaNumero(candidato.numero);
				}while(!comparaNumero(candidato.numero));
				fflush(stdin);
				fwrite(&candidato,sizeof(candidato),1,pCandidato);
				fclose(pCandidato);
				qtdCandidatos++;
			} else
				qtdCandidatos = MAX+1;	
			system("cls");
		}
		if (qtdCandidatos == MAX)
			printf("=== Cadastro Cheio ===\n\n");
		imprimeCandidatos();
	}
	return 0;
}

// ========== SUBPROGRAMAS ==========

// Objetivo: Contar candidatos em arquivo
// Par�metro: nenhum
// Retorno: quantidade de candidatos
int contaCandidatos(){
	// Declara��es
	candidatos candidato;
	FILE *pCandidato;
	int qtd = 0;
	// Instru��es
	if ((pCandidato= fopen("candidatos.bin","rb")) != NULL){
		while(!feof(pCandidato)){
			fread(&candidato,sizeof(candidato),1,pCandidato);
			if(!feof(pCandidato))
				qtd++;
		}
		fclose(pCandidato);
	}
	return qtd;
}

// Objetivo: Validar nome
// Par�metros: Nome
// Retorno: nenhum
void validaNome(char *nome){
	// Instrucoes
	while(nome[0] != '\0' && (strlen(nome) < 3 || strstr(nome," ") == NULL)){
		printf("Nome inv�lido. Digite novamente: ");
		fgets(nome,MAXIMO,stdin);
		corrigeString(nome);
	}
}

// Objetivo: Consertar string
// Par�metros: string
// Retorno: nenhum
void corrigeString(char *string){
	// Instrucoes
		fflush(stdin);
		if(string[strlen(string)-1] == '\n')
		  string[strlen(string)-1] = '\0';
}

// Objetivo: Validar n�mero
// Par�metros: n�mero
// Retorno: n�mero validado
int validaNumero(int numero){
	// Instru��es
	while(numero < 1 || numero > 99){
		printf("Numero inv�lido, digite novamente: ");
		scanf("%d",&numero);
	}
	return numero;
}

// Objetivo: Imprimir candidatos
// Par�metro: nenhum
// Retorno: nenhum
void imprimeCandidatos(){
	// Declara��es
	candidatos candidato;
	FILE *pCandidato;
	// Instru��es
	if ((pCandidato= fopen("candidatos.bin","rb")) == NULL) {
		puts("Arquivo nao pode ser aberto.");
		getch();
		exit(1);
	}else{
		printf("======   ==============================");
		printf("\nN�mero                Nome\n");
		printf("======   ==============================");
		while(!feof(pCandidato)){
			fread(&candidato,sizeof(candidato),1,pCandidato);
			if(!feof(pCandidato)){
				printf("\n  %d     ",candidato.numero);
				printf("%s",candidato.nome);			
			}
		}
		fclose(pCandidato);
		printf("\n======   ==============================");
	}
}

// Objetivo: Comparar n�meros
// Par�metro: N�mero
// Retorno: se numero j� existe no arquivo
int comparaNumero(int numero){
	// Declara��es
	candidatos candidato;
	FILE *pCandidato;
	// Instru��es
	pCandidato= fopen("candidatos.bin","rb");
	while(!feof(pCandidato))
	{
		fread(&candidato,sizeof(candidato),1,pCandidato);
		if(numero == candidato.numero)
		{
			printf("N�mero j� cadastrado\n");
			fclose(pCandidato);
			return 0;
		}
	}
	fclose(pCandidato);
	return 1;
}

