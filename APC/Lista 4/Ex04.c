#include <stdio.h>

int main()
{
  int numeros[87],aux=0,limite,cont;
  scanf("%d",&numeros[aux]);
  aux++;
  while(aux<87&&numeros[aux-1]!=0)
  {
    scanf("%d",&numeros[aux]);
    aux++;
  }

  scanf("%d",&limite);
  aux--;
  for(cont=0;cont<aux;cont++)
  {
    if(numeros[cont]>limite)
      printf("%d ",numeros[cont]);
  }
  return 0;
}
