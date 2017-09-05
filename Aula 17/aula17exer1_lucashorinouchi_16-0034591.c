// Sintese
//   Objetivo: Gerenciar o estado da aprovacao dos alunos de uma turma
//   Entrada:  Nome e nota da provas 1 e 2
//   Saída:    nome, media e estado da aprovavao

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.c>
#include <locale.h>
#define MAXIMO 50

float validaNumero(float *numero);
void fazAnalise(float *pPeso, int qtd);

int main() 
{
	// Declarações
	float *pPeso=0, soma;
	int contador = 0,aux , qtd;
	char opcao='N';
	
	// Instruções
	setlocale(LC_ALL,"portuguese");
	
	do
	{
		puts("Informe o numero de pessoas que moram na casa?");
		do
		{
			scanf("%d",&qtd);
		}while(!validaNumero(&qtd));
		if((pPeso = (float *) realloc (pPeso, qtd*sizeof(float)))==NULL)
		{
			printf("** Memoria insuficiente **");
			getch();
			exit(1);
		}
		for(aux = 0; aux<qtd; aux++)
		{
    		puts("Digite o peso das pessoas:");
    		do{
    			scanf("%f",&pPeso[aux]);
    		}while(!validaNumero(&pPeso[aux]));
    		soma = soma + pPeso[aux];
    	}
    	printf("O peso total dos moradores é %.2f\n\n",soma);
    	system("pause");
    	system("cls");
    	fazAnalise(pPeso, qtd);
    	
    	
		fflush(stdin);
		puts("Deseja continuar? Digite S para continuar ou qualquer tecla para encerrar");
		opcao = getch();
		opcao = toupper(opcao);
		system("cls");
	}while(opcao == 'S');
	system("cls");
	
	
	
	free(pPeso);//libera memoria

	
}

// ========== SUBPROGRAMAS ==========

// Objetivo: Validar número
// Parâmetros: número
// Retorno: estado da validacao do numero
float validaNumero(float *numero)
{
	// Instruções
	if((*numero > 0) && (*numero < 400))
	{
		return 1;	
	}
	else
		printf("Numero inválido, digite novamente: ");
		return 0;
}


// Objetivo: Analisar os pesos 
// Parâmetros: pesos
// Retorno: sem retorno
void fazAnalise(float *pPeso, int qtd)
{
	// Instruções
	char sexo;
	float altura,pesoIdealF,pesoIdealM;
	int aux;
	
	for(aux = 0; aux<qtd; aux++)
	{
		puts("Digite a altura das pessoas em centimetros:");
		do{
			scanf("%f",&altura);
		}while(!validaNumero(&altura));
		
		pesoIdealM = ((72.5*altura/100)-58);
		pesoIdealF = ((62*altura/100)-44.7);
		
		printf("%.2f\n",pesoIdealM);
		printf("%.2f",pesoIdealF);
		puts("Informe o sexo M para masculino ou F para feminino");
		do{
			sexo = getch();
			sexo = toupper(sexo);
		}while(sexo != 'F' && sexo != 'M');	
		if (sexo == 'F')
		{
			if(pPeso[aux]>pesoIdealF)
				printf("EXCESSO o peso %.2f é acima do peso ideal de %f.",pPeso[aux],pesoIdealF);
			else if(pPeso[aux]==pesoIdealF)
				printf("PARABENS o peso %.2f é igual do peso ideal de %f.",pPeso[aux],pesoIdealF);
			else
				printf("ABAIXO o peso %.2f é abaixo do peso ideal de %f.",pPeso[aux],pesoIdealF);
		}
		if (sexo == 'M')
		{
			if(pPeso[aux]>pesoIdealM)
				printf("EXCESSO o peso %.2f é acima do peso ideal de %f.",pPeso[aux],pesoIdealM);
			else if(pPeso[aux]==pesoIdealM)
				printf("PARABENS o peso %.2f é igual do peso ideal de %f.",pPeso[aux],pesoIdealM);
			else
				printf("ABAIXO o peso %.2f é abaixo do peso ideal de %f.",pPeso[aux],pesoIdealM);	
		}
	}

}
