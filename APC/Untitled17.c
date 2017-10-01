#include <stdio.h>
int main(void)
{
  int aux=0,prox=0,ant1=1,ant2=0;
  for (aux=0;prox<1000;aux++)
  {
    prox = ant2 + ant1;
    ant1=ant2;
    ant2=prox;
    printf("%d\n",prox);
  }
  return 0;
}
