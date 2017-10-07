#include <stdio.h>
#include <string.h>
#define linha 4
#define coluna 5

int main()
{
  int l,c,linhaM=0,colunaM=0,maior=-100000;
  int matriz[linha][coluna];

  for(l=0;l<linha;l++)
  {
    for(c=0;c<coluna;c++)
    {
      scanf("%d",&matriz[l][c]);
      if(matriz[l][c]>maior)
      {
          maior = matriz[l][c];
          linhaM=l;
          colunaM=c;
      }
    }
  }

  printf("%d %d %d",maior,linhaM,colunaM);
  return 0;
}
