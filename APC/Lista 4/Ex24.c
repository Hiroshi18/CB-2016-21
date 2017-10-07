#include <stdio.h>
#include <string.h>
#define linha 7
#define coluna 9

int main()
{
  int l,c;
  int matrizA[linha][coluna];

  for(l=0;l<linha;l++)
  {
    for(c=0;c<coluna;c++)
    {
      scanf("%d",&matrizA[l][c]);
    }
  }

  for(c=0;c<coluna;c++)
  {
    for(l=0;l<linha;l++)
    {
      printf("%d ",matrizA[l][c]);
    }
    puts("");
  }

  return 0;
}
