#include <stdio.h>
#include <string.h>
#define linha 4
#define coluna 5

int main()
{
  int l,c;
  int matrizA[linha][coluna],matrizB[linha][coluna],matrizC[linha][coluna];

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
      scanf("%d",&matrizB[l][c]);
      matrizC[l][c]=matrizA[l][c]+matrizB[l][c];
    }
  }

  for(l=0;l<linha;l++)
  {
    for(c=0;c<coluna;c++)
    {
      printf("%d ",matrizC[l][c]);
    }
    puts("");
  }

  return 0;
}
