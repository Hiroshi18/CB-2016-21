#include <stdio.h>
#include <string.h>
#define linha 7
#define coluna 7

int main()
{
  int l,c,aux;
  int matriz[linha][coluna],soma=0,cruz=0,quadrantes[4]={0,0,0,0};
  //le a matriz
  for(l=0;l<linha;l++)
  {
    for(c=0;c<coluna;c++)
    {
      scanf("%d",&matriz[l][c]);
    }
  }
  //calcula cruz
  for(l=0;l<linha;l++)
  {
    c=3;
    cruz= cruz + matriz[l][c];
  }
  for(c=0;c<coluna;c++)
  {
    l=3;
    cruz = cruz + matriz[l][c];
  }
  cruz = cruz - matriz[3][3];
  
  //0
  for(l=0;l<3;l++)
  {
    for(c=0;c<3;c++)
    {
      quadrantes[0] = quadrantes[0] + matriz[l][c];
    }
  }
  //1
  for(l=4;l<linha;l++)
  {
    for(c=4;c<coluna;c++)
    {
      quadrantes[1] = quadrantes[1] + matriz[l][c];
    }
  }
  //2
  for(l=4;l<linha;l++)
  {
    for(c=0;c<3;c++)
    {
      quadrantes[2] = quadrantes[2] + matriz[l][c];
    }
  }
  //3
  for(l=0;l<3;l++)
  {
    for(c=4;c<coluna;c++)
    {
      quadrantes[3] = quadrantes[3] + matriz[l][c];
    }
  }
  //verifica soma e printa
  for(aux=0;aux<4;aux++)
  {
    if(quadrantes[aux]>cruz)
      soma = soma + quadrantes[aux];
  }
  printf("%d\n",soma);

  return 0;
}
