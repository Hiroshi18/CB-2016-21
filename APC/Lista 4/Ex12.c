#include <stdio.h>

int main()
{
  int aux,aux1,x[10],y[10],uniao[20],interseccao[20],diferenca[20],u=0,i=0,d=0;

  for(aux=0;aux<10;aux++)
  {
    scanf("%d",&x[aux]);
  }

  for(aux=0;aux<10;aux++)
  {
    scanf("%d",&y[aux]);
  }

  for(aux=0;aux<10;aux++)
  {
      for(aux1=0;aux1<aux;aux1++)
      {
        if(x[aux]!=x[aux1] && x[aux]!=y[aux1])
        {
        
        }
      }
  }

  return 0;
}
