#include <stdio.h>

int main()
{
  int numeros[300],aux=0;
  scanf("%d",&numeros[aux]);
  aux++;
  while(aux<300 && numeros[aux-1]>0)
  {
    scanf("%d",&numeros[aux]);
    aux++;
  }
  aux = aux-2;
  for(;aux>=0;aux--)
  {
    printf("%d ",numeros[aux]);
  }
  return 0;
}
