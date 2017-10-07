#include <stdio.h>
#include <string.h>
#define linha 15
#define coluna 5

int main()
{
  int l,c;
  int matriz[linha][coluna],menor=10000000;

  for(l=0;l<linha;l++)
  {
    for(c=0;c<coluna;c++)
    {
      scanf("%d",&matriz[l][c]);
      if(matriz[l][c]<menor)
      {
        menor = matriz[l][c];
      }
    }
    for(c=0;c<coluna;c++)
    {
      matriz[l][c] = matriz[l][c] - menor;
    }
    menor=10000000;
  }

    for(l=0;l<linha;l++)
    {
      for(c=0;c<coluna;c++)
      {
        printf("%02d ", matriz[l][c]);
      }
      puts("");
    }
    return 0;
}
