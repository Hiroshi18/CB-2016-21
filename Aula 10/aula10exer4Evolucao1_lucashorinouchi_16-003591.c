/*
algoritmo aula10exer4;
// Aluno Lucas Hiroshi Horinouchi - Matr�cula: 16/0034591
// S�ntese
//  Objetivo:  Analisar um grupo de pessoas quanto a altura e o sexo
//  Entrada :  altura, sexo
//  Sa�da   : maior e menor altura do grupo, m�dia de altura das mulheres, n�mero de homens

principal
	// Declara��es
	inteiro nroPessoas; // CONSTANTE;
	real altura, maiorAltura, menorAltura, somaAlturaMulheres ;
	texto sexo;
	inteiro nroHomens, nroMulheres, contador;
	// Instru��es
	nroPessoas = 3;
	nroMulheres = 0;
	nroHomens = 0;
	somaAlturaMulheres = 0;
	maiorAltura =  0;
	menorAltura = 3;
	contador = 1;
	faca
		escreval("Escreva o sexo(masculino/feminino) da ",contador ,"� pessoa: ");
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
// S�ntese
//  Objetivo:  Validar o sexo 
//  Parametros :  sexo
//  Retorno   : Sexo Validado
funcao texto validaSexo(texto sexo)
	// Vari�veis locais
	 
	// Instru��es
 	sexo	 = maiusculo(sexo);
	enquanto(comparaTexto(sexo,"MASCULINO") != 0  e comparaTexto(sexo,"FEMININO") != 0 )faca
		escreval("o sexo informado e invalido. Verifique se voce nao digitou errado ou com algum espa�o");
		escreval("Escreva o sexo da pessoa(masculino/ feminino): ");
		leia(sexo);
		sexo	 = maiusculo(sexo);
	fimEnquanto
	retorna sexo;
	
fimFuncao
// S�ntese
//  Objetivo:  Validar a altura 
//  Parametros :  altura
//  Retorno   : altura validada
funcao real validaAltura(real altura)
	// Vari�veis locais
	// Instru��es
	enquanto(altura <= 0 ou altura >= 3)faca
		escreval("A altura nao pode ser um valor negativo, zero ou maior que 3");
		escreva("Digite a altura da pessoa: ");
		leia(altura);
	fimEnquanto
	retorna altura;
fimFuncao
// S�ntese
//  Objetivo:  Encontrar a maior altura
//  Parametros :  altura
//  Retorno   : maior altura;
funcao real encontraMaiorAltura(real alturaA , real alturaB)
	// Vari�veis locais
	// Instru��es
	retorna ((alturaA+alturaB) + abs(alturaA-alturaB))/2;
fimFuncao
// S�ntese
//  Objetivo:  Encontrar a menor altura
//  Parametros :  altura
//  Retorno   : menor altura;
funcao real encontraMenorAltura(real alturaA , real alturaB)
	// Vari�veis locais
	// Instru��es
	se (alturaA  < alturaB)entao
		retorna alturaA;
	senao
		retorna alturaB;
	fimSe	
fimFuncao
// S�ntese
//  Objetivo:  Encontrar a media das alturas entre as mulheres
//  Parametros :  Soma das alturas das mulheres, numero de alturas das mulheres
//  Retorno   : menor altura;
funcao real encontraMediaMulheres(real somaAltura , inteiro nroMulheres)
	// Vari�veis locais
	// Instru��es
	retorna somaAltura/nroMulheres;
fimFuncao
// S�ntese
//  Objetivo:  Imprime os resultados obtidos
//  Parametros :  menor altura, maior altura, numero de homens, media das alturas das  mulheres,
//  Retorno   : Sem retorno
procedimento  imprimeResultado(real menorAltura, real maiorAltura, inteiro nroHomens, real mediaAlturaMulheres )
	// Vari�veis locais
	// Instru��es
	escreval("A maior altura do grupo: ",maiorAltura::2);
	escreval("A menor altura do grupo: ",menorAltura::2);
	escreval("A media de altura das mulheres: ",mediaAlturaMulheres::2);
	escreval("O n�mero de homens: ",nroHomens);
fimProcedimento
*/
#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>
int main () 
{
	// Declara��es
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
	// Instru��es
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
// S�ntese
//  Objetivo:  Validar o sexo 
//  Parametros :  sexo
//  Retorno   : Sexo Validado
char* validaSexo(char sexo[])
{
	// Vari�veis locais
	char* maiusculo(char texto[]);
	// Instru��es
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
// S�ntese
//  Objetivo:  Deixar o texto, caso seja um texto, em caixa alta 
//  Parametros :  texto
//  Retorno   : texto em caixa alta
char* maiusculo(char texto[])
{
	// Vari�veis locais
	int percorreCaracter;
	// Instru��es
	
	for(percorreCaracter = 0; percorreCaracter <= (strlen(texto) -1 );percorreCaracter++)
	{
		if(97 <= texto[percorreCaracter] &&   texto[percorreCaracter] <= 122) 
			texto[percorreCaracter] -= 32;
	}
	return texto;
}
// S�ntese
//  Objetivo:  Validar a altura 
//  Parametros :  altura
//  Retorno   : altura validada
float validaAltura(float altura)
{
	// Vari�veis locais
	// Instru��es
	while(altura <= 0)
	{
	
		printf("A altura nao pode ser um valor negativo ou zero\n");
		printf("Digite a altura da pessoa: ");
		scanf("%f",&altura);
	}
	return altura;
}
// S�ntese
//  Objetivo:  Encontrar a maior altura
//  Parametros :  altura
//  Retorno   : maior altura;
float encontraMaiorAltura(float altura[])
{	// Vari�veis locais
	int aux;
	float maiorAltura;
	// Instru��es
	for (aux=0; aux<=8; aux++)
	{
	if (altura[aux] >= altura[aux+1])
		maiorAltura = altura[aux];
	else
	maiorAltura = altura[aux+1];	
	}
	return maiorAltura;
	
}
// S�ntese
//  Objetivo:  Encontrar a menor altura
//  Parametros :  altura
//  Retorno   : menor altura;
float encontraMenorAltura(float altura[])
{
	// Vari�veis locais
	int aux;
	float menorAltura;
	// Instru��es
	for (aux=0; aux<=8; aux++)
	{
	if (altura[aux] < altura[aux+1])
		menorAltura = altura[aux];
	else
	menorAltura = altura[aux+1];	
	}
	return menorAltura;
}
// S�ntese
//  Objetivo:  Imprime os resultados obtidos
//  Parametros :  menor altura, maior altura, numero de homens, media das alturas das  mulheres,
//  Retorno   : Sem retorno
void  imprimeResultado(float menorAltura, float maiorAltura, int nroHomens, float mediaAlturaMulheres)
{
	// Vari�veis locais
	// Instru��es
	printf("\nA maior altura do grupo: %.2fm",maiorAltura);
	printf("\nA menor altura do grupo: %.2fm",menorAltura);
	printf("\nA media de altura das mulheres: %.2fm",mediaAlturaMulheres);
	printf("\nO numero de homens: %d",nroHomens);
}
