#include <stdio.h>
#include <math.h>

int main()
{
  int aux;
  double numeros[28], media=0,variancia=0,mediaVariancia;

  for(aux=0;aux<28;aux++)
  {
    scanf("%lf",&numeros[aux]);
    media = media + numeros[aux];
  }
  media = media/28.0;

  for(aux=0;aux<28;aux++)
  {
    numeros[aux] = pow(numeros[aux] - media, 2);
  }
  for(aux=0;aux<28;aux++)
  {
    variancia = numeros[aux] + variancia;
  }
  mediaVariancia = variancia/28;

  printf("%.1lf\n%.1lf\n",mediaVariancia,sqrt(mediaVariancia));
  return 0;
}
