#include <stdio.h>

int main()
{
  int numeros[150],aux=0,limite;

  for(aux=0;aux<150;aux++)
  {
    scanf("%d",&numeros[aux]);
  }

  scanf("%d",&limite);

  for(aux=0;aux<150;aux++)
  {
    if(numeros[aux]<limite)
      printf("%d ",numeros[aux]);
  }
  return 0;
}
