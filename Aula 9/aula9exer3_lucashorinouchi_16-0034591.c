/*algoritmo aula9exer3;
// Aluno: Lucas Hiroshi Horinouchi
// Matricula: 160034591
// S�ntese
//  Objetivo: Apresentar um caractere em diferentes formas
//  Entrada : caractere
//  Sa�da   : caractere na forma decimal, octal, hexadecimal e caractere
*/


#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{	
	//Declara��es
    char car;
     
   //In�cio
	printf("Informe o caractere\n");
    scanf("%c",&car);
    system("CLS");
    printf ("Forma decimal:%d\nForma octal: %o\nForma hexadecimal: %x\nForma caractere: %c\n",car,car,car,car);
    getch();
	return 0;
}

