#include <stdio.h>
#include <string.h>
#define linha 7
#define coluna 7

int main()
{
  int l,c,SD=0;
  int matriz[linha][coluna];

  for(l=0;l<linha;l++)
  {
    for(c=0;c<coluna;c++)
    {
      scanf("%d",&matriz[l][c]);
      if(l==c)
      {
          SD = SD + matriz[l][c];
      }
    }
  }
  printf("%d",SD);
  return 0;
}
