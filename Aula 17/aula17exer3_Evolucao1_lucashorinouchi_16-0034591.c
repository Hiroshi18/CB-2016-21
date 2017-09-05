// Nome: Lucas Hiroshi Horinouchi
// Sintese
//   Objetivos: Analisar e classificar pesos de uma residência
//   Entrada:Pesos, altura e sexo
//   Saída:Peso ideal, diferença do peso para o ideal e situação do peso em relação ao ideal

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.c>
#include <math.h>
#define MODULO(x) ((x)>=0?(x):-(x))
typedef struct
{
	float peso[100], altura[100];
	char sexo[100];
}familia;

int main() {
	// Declarações
	float *pPeso = 0,soma=0;
	int qtd, aux;
	char opcao;
	int validaQtd(int qtd);
	float validaPeso(float peso);
	void fazAnalise(familia *pFamilia, int qtd);
	FILE *pArquivo;
	familia *pFamilia, leitura;
	// Instruções
	do{
		printf("Quantas pessoas moram nessa residencia? ");
		scanf("%d",&qtd);
		qtd=validaQtd(qtd);
		if((pFamilia = (familia*) calloc(qtd,sizeof(familia))) != NULL)
		{
			for(aux=0;aux < qtd;aux++)
			{
				printf("Digite o peso da %da pessoa: ",aux + 1);
				scanf("%f",&pFamilia[aux].peso[aux]);
				pFamilia[aux].peso[aux]=validaPeso(pFamilia[aux].peso[aux]);
				soma = (soma + pFamilia[aux].peso[aux]);
				system("cls");
			}
			printf("A soma de todos os pesos %.2f\n\n",soma);
			fazAnalise(pFamilia,qtd);
			do
			{
				puts("Deseja gravar os dados em arquivo?");
				printf("\nPressione (S) para continuar ou (N) para nao: ");
				opcao=getch();
				opcao=toupper(opcao);
			}while(opcao != 'S' && opcao != 'N');
			if (opcao == 'S')
			{
				pArquivo = fopen("familia.bin" ,"a+b");
				for(aux=0;aux<qtd; aux++);
					fwrite(pFamilia, sizeof (familia), 1 ,pArquivo);
				system("cls");
				aux=0;
				fclose(pArquivo);
				pArquivo = fopen("familia.bin" ,"rb");
				while(fread(&leitura,sizeof(familia),1,pArquivo) == 1)
				{
					fread(&leitura, sizeof (familia), 1 , pArquivo);
					printf("A pessoa %d tem peso %.2f altura %.2f e sexo %c\n",aux+1, leitura.peso[aux], leitura.altura[aux], leitura.sexo[aux]);
					aux++;
				}
				puts("Estao gravados em arquivo");
				fclose(pArquivo);
				free(pFamilia);
			}
			else
			{
				free(pFamilia);
			}
		}
		else
		{
			textcolor(4);
			printf("Nao foi possivel alocar memoria\n");
			textcolor(7);
		}
		system("cls");
		printf("Deseja continuar?\nPressione (S) para continuar ou qualquer tecla para sair: ");
		opcao=getch();
		opcao=toupper(opcao);
	}while(opcao == 'S');
	system("cls");
	textcolor(12);
	printf("BOAS FERIAS!!\n\n");
	textcolor(7);
	system("pause");
	return 0;
}

// ========== Subprogramas ==========

// Objetivo: Valida quantidade
// Parâmetros: quantidade
// Retorno: quantidade validada

int validaQtd(int qtd){
	// Instruções
	while(qtd < 0||qtd > 100){
		printf("Quantidade invalida, digite novamente: ");
		scanf("%d",&qtd);
	}
	return qtd;
}

// Objetivo: Valida peso
// Parâmetros: peso
// Retorno: peso validado

float validaPeso(float peso){
	// Instruções
	while(peso < 0 || peso > 200){
		printf("Peso invalido, digite novamente: ");
		scanf("%f",&peso);
	}
	return peso;
}

// Objetivo: Fazer analise dos pesos
// Parâmetros: pesos e quantidade de pessoas
// Retorno: nenhum

void fazAnalise(familia *pFamilia,int qtd){
	// Declarações
	int aux;
	float pesoIdeal, modulo;
	float validaAltura(float altura);
	float calculaPesoIdeal(float peso,char sexo);
	void classificaPeso(float peso,float pesoIdeal);
	char validaSexo(char sexo);
	// Instruções
	for(aux=0;aux < qtd;aux++){
		printf("Digite a altura da pessoa de peso %.2f Kg: ",(pFamilia+aux)->peso[aux]);
		scanf("%f",&pFamilia[aux].altura[aux]);
		pFamilia[aux].altura[aux]= validaAltura(pFamilia[aux].altura[aux]);
		printf("Pressione (M) para masculino ou (F) para feminino: ");
		pFamilia[aux].sexo[aux] = getche();
		pFamilia[aux].sexo[aux]=toupper(pFamilia[aux].sexo[aux]);
		pFamilia[aux].sexo[aux]=validaSexo(pFamilia[aux].sexo[aux]);
		pesoIdeal=calculaPesoIdeal(pFamilia[aux].altura[aux],pFamilia[aux].sexo[aux]);
		system("cls");
		modulo = pesoIdeal - pFamilia[aux].peso[aux]; 
		MODULO(modulo);
		printf("PESO IDEAL = %.2f Kg\nDIFERENCA DO PESO IDEAL = %.2f Kg\n",pesoIdeal,modulo);
		classificaPeso(pFamilia[aux].peso[aux], pesoIdeal);
		system("pause");
		system("cls");
	}
}

// Objetivo: Valida altura
// Parâmetros: altura
// Retorno: altura validada

float validaAltura(float altura){
	// Instruções
	while(altura < 0.5 || altura > 2.5){
		printf("Altura invalida, digite novamente: ");
		scanf("%f",&altura);
	}
	return altura;
}

// Objetivo: Valida sexo
// Parâmetros: sexo
// Retorno: sexo validado

char validaSexo(char sexo){
	// Instruções
	while(sexo != 'M' && sexo != 'F'){
		printf("\nSexo invalido.\nPressione (M) para masculino ou (F) para feminino: ");
		sexo=getche();
		sexo=toupper(sexo);
	}
	return sexo;
}

// Objetivo: Calcular peso ideal
// Parâmetros: altura e sexo
// Retorno: peso ideal

float calculaPesoIdeal(float altura,char sexo){
	// Instruções
	if(sexo == 'M')
		return ((72.5 * altura) - 58);
	else
		return ((62.1 * altura) - 44.7);
}

// Objetivo: Classificar peso
// Parâmetros: peso e peso ideal
// Retorno: nenhum

void classificaPeso(float peso,float pesoIdeal){
	// Instruções
	if(peso > pesoIdeal){
		textcolor(12);
		puts("EXCESSO");
	}
	else
		if(peso < pesoIdeal){
			textcolor(2);
			puts("ABAIXO");
		}else{
			textcolor(5);
			puts("PARABENS");
		}
	textcolor(7);
	
}
