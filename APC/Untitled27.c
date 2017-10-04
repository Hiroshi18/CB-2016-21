#include <stdio.h>
int main()
{
  double somaC=0,somaV=0,compra,venda,investimento=0,total;
  int lucro=0,prejuizo=0;

  for(investimento=0; investimento<6;investimento++)
  {
    scanf("%lf %lf",&compra,&venda);
    somaC = somaC + compra;
    somaV = somaV + venda;

    if (venda>compra)
    {
      lucro++;
    }
    else
    {
      prejuizo++;
    }
  }
  total = somaV-somaC;
  printf("%.2lf %d %d",(total/50000)*100,lucro,prejuizo);
  return 0;
}
