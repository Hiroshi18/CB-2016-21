/*algoritmo aula11exer5;
// Aluno: Lucas Hiroshi Horinouchi
// Matricula: 160034591
// Síntese
//  Objetivo: Calcular e mostrar uma potência
//  Entrada : expoente e base
//  Saída   : valor calculado


principal
	// Declarações
	inteiro expoente;
	real base, resultado;

	// Instruções
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
	// Declarações
	int expoente;
	float base, resultado;
	// Instruções
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
