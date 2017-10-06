#include <stdio.h>

int main()
{
  int numeros[106],aux=0,limite,cont,soma=0;

  scanf("%d",&numeros[aux]);
  aux++;
  while(aux<106&&numeros[aux-1]!=0)
  {
    scanf("%d",&numeros[aux]);
    aux++;
  }

  scanf("%d",&limite);
  for(cont=0;cont<aux;cont++)
  {
    if(numeros[cont]<=limite)
      soma = soma + numeros[cont];
  }
  printf("%d\n",soma);
  return 0;
}
