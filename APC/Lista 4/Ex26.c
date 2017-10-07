#include <stdio.h>
#include <string.h>
#define linha 10
#define coluna 5

int main()
{
  int l,c,somaL[linha] = {0,0,0,0,0,0,0,0,0,0},lmaior=0,linhaM;
  int matriz[linha][coluna];

  for(l=0;l<linha;l++)
  {
    for(c=0;c<coluna;c++)
    {
      scanf("%d",&matriz[l][c]);
    }
  }

  for(l=0;l<linha;l++)
  {
    for(c=0;c<coluna;c++)
    {
      somaL[l] = somaL[l] + matriz[l][c];
    }
    if(somaL[l]>lmaior)
    {
        lmaior = somaL[l];
        linhaM = l;
    }
  }

  printf("%d",linhaM);
  return 0;
}
