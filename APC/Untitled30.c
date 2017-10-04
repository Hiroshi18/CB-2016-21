#include <stdio.h>

int main()
{
  int aux;
  double rs=0,rp=0,ri,maior=0,soma=0,dif;

  for(aux=1;aux<=6;aux++)
  {
    scanf("%lf",&ri);
    rs = rs + ri;
    soma = soma + ri;

    if(ri>maior)
      maior = ri;
  }
  rp = 1/rs;
  dif = maior - (soma/6);
  printf("%.4lf %.4lf %.4lf\n",rs, rp, dif);
  return 0;
}
