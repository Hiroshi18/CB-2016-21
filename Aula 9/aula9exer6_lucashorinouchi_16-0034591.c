/*algoritmo aula9exer6;
//Aluno: Lucas Hiroshi Horinouchi
//Síntese
//	Objetivo: Mostrar o sexo
//	Entrada: caracter
//	Saida: masculino, feminino ou sexo invalido.

principal
	//Declarações
	caracter sexo;
	//Instruções
	escreval("Digite 'f' para femino ou 'm' para masculino:");
	leiaCaracter(sexo);
	se (sexo=='f')entao
		escreval("********************");
		escreval("*                  *");
		escreval("*     Feminino     *");
		escreval("*                  *");
		escreval("********************");
	senao
		se(sexo=='m')entao
			escreval("********************");
			escreval("*                  *");
			escreval("*     Masculino    *");
			escreval("*                  *");
			escreval("********************");
		senao
			escreval("********************");
			escreval("*                  *");
			escreval("*  Sexo invalido!  *");
			escreval("*                  *");
			escreval("********************");
		fimSe
	fimSe
fimPrincipal
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.c>

int main(int argc, char *argv[]) {
	
	//Declarações
	char sexo;
	
	//Início
	printf("Digite 'f' para femino ou 'm' para masculino:\n");
	printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n"); 
	printf("\xBA                  \xBA\n");
	printf("\xBA                  \xBA\n");
	printf("\xBA                  \xBA\n");
	printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n"); 
	sexo = getch();
	gotoxy(4,4);
	sexo =='f' ? printf("Feminino") :sexo =='m' ? printf("Masculino") :printf("Sexo invalido!");
	printf("\n\n\n\n\n\n\n\n\n\n\n");
	return 0;
	
		
	
}

