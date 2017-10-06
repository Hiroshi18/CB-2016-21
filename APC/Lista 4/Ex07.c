#include <stdio.h>

int main()
{
  int numeros[135],aux=0,limiteSuperior,limiteInferior;

  for(aux=0;aux<135;aux++)
  {
    scanf("%d",&numeros[aux]);
  }
  scanf("%d",&limiteInferior);
  scanf("%d",&limiteSuperior);

  for(aux=0;aux<135;aux++)
  {
    if(numeros[aux]>limiteSuperior || numeros[aux]<limiteInferior)
      printf("%d ",numeros[aux]);
  }
  return 0;
}
