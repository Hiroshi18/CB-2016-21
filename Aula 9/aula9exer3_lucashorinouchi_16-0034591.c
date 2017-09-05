/*algoritmo aula9exer3;
// Aluno: Lucas Hiroshi Horinouchi
// Matricula: 160034591
// Síntese
//  Objetivo: Apresentar um caractere em diferentes formas
//  Entrada : caractere
//  Saída   : caractere na forma decimal, octal, hexadecimal e caractere
*/


#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{	
	//Declarações
    char car;
     
   //Início
	printf("Informe o caractere\n");
    scanf("%c",&car);
    system("CLS");
    printf ("Forma decimal:%d\nForma octal: %o\nForma hexadecimal: %x\nForma caractere: %c\n",car,car,car,car);
    getch();
	return 0;
}

