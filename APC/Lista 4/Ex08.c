#include <stdio.h>

int main()
{
  char hexa[999];
  int numeros,aux=0,cont=0;
  scanf("%d",&numeros);
  while(numeros>0)
  {
    switch (numeros%16)
    {
      case 0:
      hexa[aux] = '0';
      break;
      case 1:
      hexa[aux] = '1';
      break;
      case 2:
      hexa[aux] = '2';
      break;
      case 3:
      hexa[aux] = '3';
      break;
      case 4:
      hexa[aux] = '4';
      break;
      case 5:
      hexa[aux] = '5';
      break;
      case 6:
      hexa[aux] = '6';
      break;
      case 7:
      hexa[aux] = '7';
      break;
      case 8:
      hexa[aux] = '8';
      break;
      case 9:
      hexa[aux] = '9';
      break;
      case 10:
      hexa[aux] = 'A';
      break;
      case 11:
      hexa[aux] = 'B';
      break;
      case 12:
      hexa[aux] = 'C';
      break;
      case 13:
      hexa[aux] = 'D';
      break;
      case 14:
      hexa[aux] = 'E';
      break;
      case 15:
      hexa[aux] = 'F';
      break;
    }
    numeros = numeros/16;
    aux++;
  }
  for(cont=aux-1;cont>=0;cont--)
    printf("%c",hexa[cont]);
  return 0;
}
