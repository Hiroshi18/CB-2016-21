/*algoritmo aula11exer5;
// Aluno: Lucas Hiroshi Horinouchi
// Matricula: 160034591
// S�ntese
//  Objetivo: Calcular e mostrar uma pot�ncia
//  Entrada : expoente e base
//  Sa�da   : valor calculado


principal
	// Declara��es
	inteiro expoente;
	real base, resultado;

	// Instru��es
	escreval("Informe a base");
	leia(base);
	escreval("Informe o expoente");
	leia(expoente);
	resultado = calculaPotencia(base, expoente, resultado);
	escreval ("O resultado e ",resultado::2);
fimPrincipal

//=================Subalgoritmos=================

// Objetivo: calcular uma potencia
// Parametros: base e expoente
// Retorna: valor calculado
funcao real calculaPotencia(real base, inteiro expoente,real resultado)
	// Declaracoes
	
	// Instrucoes
	resultado = exp(base, expoente);
	retorna resultado;
fimFuncao*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculaPotencia(float base, int expoente,float resultado);

int main() 
{
	// Declara��es
	int expoente;
	float base, resultado;
	// Instru��es
	printf("Informe a base:\n");
	scanf("%f",&base);
	printf("Informe o expoente:\n");
	scanf("%i",&expoente);
	resultado = calculaPotencia(base, expoente, resultado);
	printf ("O resultado e %.2f",resultado);
	return 0;
}
//=================Subalgoritmos=================

float calculaPotencia(float base, int expoente,float resultado)
{
	// Declaracoes
	
	// Instrucoes
	resultado = pow(base, expoente);
	return resultado;
}
