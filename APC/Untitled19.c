#include <stdio.h>

int main()
{
  int i ,aux=0 ,prox=0 ,ant1=1 ,ant2=0,cont=0;
  long int N;

  scanf("%ld" ,&N);

  for (aux=0;prox<1000;aux++)
  {
    prox = ant2 + ant1;
    ant1=ant2;
    ant2=prox;

    if(prox==N)
    {
      for(i=1; i<N ;i++)
      {
        if(N%i==0)
        {
          cont++;
        }
      }
      if(cont>2)
      {
        cont=0;
        printf("NAO");
        return 0;
      }
      else
      {
        cont=0;
        printf("SIM");
        return 0;
      }
    }
  }
  printf("NAO");
  return 0;
}
