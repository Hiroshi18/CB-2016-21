/*algoritmo aula15exer5;
// Aluno: Lucas Hiroshi Horinouchi
// Matricula: 160034591
// S�ntese
//  Objetivo: Cadastrar e mostrar os dados da pessoa
//  Entrada : nome, altura, telefone, rua, numero da casa
//  Sa�da   : nome, altura, telefone, rua, numero da casa
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXIMO 300
#define MINIMO 0
#define MAXCARACTERES 80
#define MAXNUMEROS 11
#define MAXIMORUA 999
void estranho (int *p, int *q);

int main() {
// Declara��es
	int aux = 6, valor = 10;  
	estranho(&aux, &valor);

}

void estranho (int *p, int *q)
{
     int temp;
     temp=0;
     temp = *p;
     *p = *q;
     *q = temp;
}



