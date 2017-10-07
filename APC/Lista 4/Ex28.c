#include <stdio.h>
#include <string.h>
#define linha 9
#define coluna 9

int main()
{
  int l,c;
  int matriz[linha][coluna],troca;

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
        if(l == c)
        {
          troca = matriz[l][c];
          matriz[l][c]=matriz[linha-(l+1)][c];
          matriz[linha-(l+1)][c] = troca;
        }
      }
    }
    //11-91 22-82 33-73
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
