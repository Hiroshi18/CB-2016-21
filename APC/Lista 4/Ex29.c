#include <stdio.h>
#include <string.h>
#define linha 10
#define coluna 10

int main()
{
  int l,c,aux=1;
  int matriz[linha][coluna],soma=0;

  for(l=0;l<linha;l++)
  {
    for(c=0;c<coluna;c++)
    {
      scanf("%d",&matriz[l][c]);
    }
  }
  for(l=0;l<linha;l++)
  {
    for(c=0;c<aux;c++)
    {
      soma = matriz[l][c]+soma;
    }
    aux++;
  }
  printf("%d",soma);
  return 0;
}
