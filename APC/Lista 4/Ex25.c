#include <stdio.h>
#include <string.h>
#define linha 9
#define coluna 9

int main()
{
  int l,c;
  int matrizA[linha][coluna],simetrico=0;

  for(l=0;l<linha;l++)
  {
    for(c=0;c<coluna;c++)
    {
      scanf("%d",&matrizA[l][c]);
    }
  }

  for(l=0;l<linha;l++)
  {
    for(c=0;c<coluna;c++)
    {
      if(matrizA[l][c]!=matrizA[c][l])
        simetrico=1;
    }
  }
  if(simetrico==1)
    printf("N");
  else
    printf("S");

  return 0;
}
