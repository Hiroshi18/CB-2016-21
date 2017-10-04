#include <stdio.h>

int main()
{
  double valor,total=0,lucro,totalValor=0;
  int aux;

  for(aux=0;aux<12;aux++)
  {
    scanf("%lf",&valor);

    total = total + valor;
    totalValor = totalValor + valor;

    if(total>10000)
    {
      total = total*1.0225;
    }
    else
    {
      total = total*1.0175;
    }
  }

  lucro = total-totalValor;
  printf("%.2lf\n",lucro);
  return 0;
}
