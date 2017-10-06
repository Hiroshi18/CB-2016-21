#include <stdio.h>

int main()
{
  int numeros[106],aux=0,limite,cont,media=0;
  double soma=0;
  scanf("%d",&numeros[aux]);
  aux++;
  while(aux<53)
  {
    scanf("%d",&numeros[aux]);
    aux++;
  }

  scanf("%d",&limite);
  for(cont=0;cont<aux;cont++)
  {
    if(numeros[cont]<=limite)
    {
      soma = soma + numeros[cont];
      media++;
    }
  }
  printf("%.1lf\n",soma/media);
  return 0;
}
