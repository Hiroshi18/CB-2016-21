#include <stdio.h>
#include <string.h>
#define linha 8
#define coluna 8

int main()
{
  int l,c,somaD=0,somaL[linha] = {0,0,0,0,0,0,0,0},restoM=-500,lresto;
  int matriz[linha][coluna];

  for(l=0;l<linha;l++)
  {
    for(c=0;c<coluna;c++)
    {
      scanf("%d",&matriz[l][c]);
      if(l==c)
        somaD = somaD + matriz[l][c];
    }
  }

  for(l=0;l<linha;l++)
  {
    for(c=0;c<coluna;c++)
    {
      somaL[l] = somaL[l] + matriz[l][c];
    }
    if((somaL[l]%somaD)>restoM)
    {
      restoM=somaL[l]%somaD;
      lresto = l;
    }
  }
  printf("%d",lresto);
  return 0;
}
