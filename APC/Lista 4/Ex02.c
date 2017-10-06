#include <stdio.h>

int main()
{
  int numeros[200],aux;
  for(aux=0;aux<200;aux++)
  {
    scanf("%d",&numeros[aux]);
  }
  for(aux=199;aux>=0;aux--)
  {
    printf("%d ",numeros[aux]);
  }
  return 0;
}
