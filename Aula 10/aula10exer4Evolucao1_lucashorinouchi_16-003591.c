/*
algoritmo aula10exer4;
// Aluno Lucas Hiroshi Horinouchi - Matrícula: 16/0034591
// Síntese
//  Objetivo:  Analisar um grupo de pessoas quanto a altura e o sexo
//  Entrada :  altura, sexo
//  Saída   : maior e menor altura do grupo, média de altura das mulheres, número de homens

principal
	// Declarações
	inteiro nroPessoas; // CONSTANTE;
	real altura, maiorAltura, menorAltura, somaAlturaMulheres ;
	texto sexo;
	inteiro nroHomens, nroMulheres, contador;
	// Instruções
	nroPessoas = 3;
	nroMulheres = 0;
	nroHomens = 0;
	somaAlturaMulheres = 0;
	maiorAltura =  0;
	menorAltura = 3;
	contador = 1;
	faca
		escreval("Escreva o sexo(masculino/feminino) da ",contador ,"º pessoa: ");
		leia(sexo);
		sexo = validaSexo(sexo);
		escreva("Digite a altura da pessoa: ");
		leia(altura);
		altura = validaAltura(altura);
		se(comparaTexto(sexo,"MASCULINO") == 0)entao
			nroHomens = nroHomens+1;
		senao
		 	nroMulheres = nroMulheres+1;
			somaAlturaMulheres = somaAlturaMulheres+ altura;
		fimSe
		maiorAltura = encontraMaiorAltura(maiorAltura ,altura);
		menorAltura = encontraMenorAltura(menorAltura,altura);
		limpaTela();
		contador = contador+1;
	enquanto(contador <= nroPessoas);
	se(nroMulheres == 0)entao
		imprimeResultado(menorAltura, maiorAltura, nroHomens, nroMulheres );
	senao
		imprimeResultado(menorAltura, maiorAltura, nroHomens, encontraMediaMulheres(somaAlturaMulheres, nroMulheres) );
	fimSe
fimPrincipal

//============================SUBALGORITMOS======================
// Síntese
//  Objetivo:  Validar o sexo 
//  Parametros :  sexo
//  Retorno   : Sexo Validado
funcao texto validaSexo(texto sexo)
	// Variáveis locais
	 
	// Instruções
 	sexo	 = maiusculo(sexo);
	enquanto(comparaTexto(sexo,"MASCULINO") != 0  e comparaTexto(sexo,"FEMININO") != 0 )faca
		escreval("o sexo informado e invalido. Verifique se voce nao digitou errado ou com algum espaço");
		escreval("Escreva o sexo da pessoa(masculino/ feminino): ");
		leia(sexo);
		sexo	 = maiusculo(sexo);
	fimEnquanto
	retorna sexo;
	
fimFuncao
// Síntese
//  Objetivo:  Validar a altura 
//  Parametros :  altura
//  Retorno   : altura validada
funcao real validaAltura(real altura)
	// Variáveis locais
	// Instruções
	enquanto(altura <= 0 ou altura >= 3)faca
		escreval("A altura nao pode ser um valor negativo, zero ou maior que 3");
		escreva("Digite a altura da pessoa: ");
		leia(altura);
	fimEnquanto
	retorna altura;
fimFuncao
// Síntese
//  Objetivo:  Encontrar a maior altura
//  Parametros :  altura
//  Retorno   : maior altura;
funcao real encontraMaiorAltura(real alturaA , real alturaB)
	// Variáveis locais
	// Instruções
	retorna ((alturaA+alturaB) + abs(alturaA-alturaB))/2;
fimFuncao
// Síntese
//  Objetivo:  Encontrar a menor altura
//  Parametros :  altura
//  Retorno   : menor altura;
funcao real encontraMenorAltura(real alturaA , real alturaB)
	// Variáveis locais
	// Instruções
	se (alturaA  < alturaB)entao
		retorna alturaA;
	senao
		retorna alturaB;
	fimSe	
fimFuncao
// Síntese
//  Objetivo:  Encontrar a media das alturas entre as mulheres
//  Parametros :  Soma das alturas das mulheres, numero de alturas das mulheres
//  Retorno   : menor altura;
funcao real encontraMediaMulheres(real somaAltura , inteiro nroMulheres)
	// Variáveis locais
	// Instruções
	retorna somaAltura/nroMulheres;
fimFuncao
// Síntese
//  Objetivo:  Imprime os resultados obtidos
//  Parametros :  menor altura, maior altura, numero de homens, media das alturas das  mulheres,
//  Retorno   : Sem retorno
procedimento  imprimeResultado(real menorAltura, real maiorAltura, inteiro nroHomens, real mediaAlturaMulheres )
	// Variáveis locais
	// Instruções
	escreval("A maior altura do grupo: ",maiorAltura::2);
	escreval("A menor altura do grupo: ",menorAltura::2);
	escreval("A media de altura das mulheres: ",mediaAlturaMulheres::2);
	escreval("O número de homens: ",nroHomens);
fimProcedimento
*/
#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>
int main () 
{
	// Declarações
	float maiorAltura, menorAltura, mediaAlturaMulheres;
	float altura[10];
	const int  nroPessoas = 2;
	const int tamanhoString = 10;
	char sexo[tamanhoString], charTemporario;
	int  nroHomens, nroMulheres, contagemPessoas,aux;
	char* validaSexo(char sexo[]);
	float validaAltura(float altura);
	float encontraMaiorAltura(float altura[]);
	float encontraMenorAltura(float altura[]);
	float encontraMediaMulheres(float somaAlturaMulheres, int nroMulheres);
	void  imprimeResultado(float menorAltura, float maiorAltura, int nroHomens,float mediaAlturaMulheres);
	// Instruções
	contagemPessoas = 10;
	nroMulheres = nroHomens = mediaAlturaMulheres = maiorAltura = menorAltura = 0;
	for (aux=0;aux<=9;aux++)
	{
		printf("Escreva o sexo da pessoa(masculino/feminino)(Disponiveis: %d):  ",contagemPessoas );
		scanf ( "%10s", sexo);
	    fflush(stdin);
	    strcpy(sexo, validaSexo(sexo));
	    printf("Digite a altura da pessoa: ");
		scanf("%f",&altura[aux]);
		altura[aux] = validaAltura(altura[aux]);
		if(strcmp(sexo,"MASCULINO"))
		{
			nroMulheres = nroMulheres+1;
			mediaAlturaMulheres = (mediaAlturaMulheres + altura[aux]);	
		}
		else
		{
			nroHomens = nroHomens+1;
		}
		contagemPessoas--;
		system("cls");
	}
	maiorAltura = encontraMaiorAltura(altura);
	menorAltura = encontraMenorAltura(altura);
	mediaAlturaMulheres = (mediaAlturaMulheres/nroMulheres);
 	imprimeResultado(menorAltura, maiorAltura, nroHomens, mediaAlturaMulheres);
}	
	 
	 
	 //==================SubProgramas====================
// Síntese
//  Objetivo:  Validar o sexo 
//  Parametros :  sexo
//  Retorno   : Sexo Validado
char* validaSexo(char sexo[])
{
	// Variáveis locais
	char* maiusculo(char texto[]);
	// Instruções
	strcpy(sexo, maiusculo(sexo) );
	while(strcmp(sexo,"MASCULINO") != 0 && strcmp(sexo,"FEMININO") != 0)
	{	
		printf("\no sexo informado e invalido.\nVerifique se voce nao digitou errado ou com algum espaco\n");
		printf("Escreva o sexo da pessoa(masculino / feminino): ");
		scanf ( "%10s", sexo);
		strcpy(sexo, maiusculo(sexo));
	}
	system("cls");
	return sexo;	
}
// Síntese
//  Objetivo:  Deixar o texto, caso seja um texto, em caixa alta 
//  Parametros :  texto
//  Retorno   : texto em caixa alta
char* maiusculo(char texto[])
{
	// Variáveis locais
	int percorreCaracter;
	// Instruções
	
	for(percorreCaracter = 0; percorreCaracter <= (strlen(texto) -1 );percorreCaracter++)
	{
		if(97 <= texto[percorreCaracter] &&   texto[percorreCaracter] <= 122) 
			texto[percorreCaracter] -= 32;
	}
	return texto;
}
// Síntese
//  Objetivo:  Validar a altura 
//  Parametros :  altura
//  Retorno   : altura validada
float validaAltura(float altura)
{
	// Variáveis locais
	// Instruções
	while(altura <= 0)
	{
	
		printf("A altura nao pode ser um valor negativo ou zero\n");
		printf("Digite a altura da pessoa: ");
		scanf("%f",&altura);
	}
	return altura;
}
// Síntese
//  Objetivo:  Encontrar a maior altura
//  Parametros :  altura
//  Retorno   : maior altura;
float encontraMaiorAltura(float altura[])
{	// Variáveis locais
	int aux;
	float maiorAltura;
	// Instruções
	for (aux=0; aux<=8; aux++)
	{
	if (altura[aux] >= altura[aux+1])
		maiorAltura = altura[aux];
	else
	maiorAltura = altura[aux+1];	
	}
	return maiorAltura;
	
}
// Síntese
//  Objetivo:  Encontrar a menor altura
//  Parametros :  altura
//  Retorno   : menor altura;
float encontraMenorAltura(float altura[])
{
	// Variáveis locais
	int aux;
	float menorAltura;
	// Instruções
	for (aux=0; aux<=8; aux++)
	{
	if (altura[aux] < altura[aux+1])
		menorAltura = altura[aux];
	else
	menorAltura = altura[aux+1];	
	}
	return menorAltura;
}
// Síntese
//  Objetivo:  Imprime os resultados obtidos
//  Parametros :  menor altura, maior altura, numero de homens, media das alturas das  mulheres,
//  Retorno   : Sem retorno
void  imprimeResultado(float menorAltura, float maiorAltura, int nroHomens, float mediaAlturaMulheres)
{
	// Variáveis locais
	// Instruções
	printf("\nA maior altura do grupo: %.2fm",maiorAltura);
	printf("\nA menor altura do grupo: %.2fm",menorAltura);
	printf("\nA media de altura das mulheres: %.2fm",mediaAlturaMulheres);
	printf("\nO numero de homens: %d",nroHomens);
}
