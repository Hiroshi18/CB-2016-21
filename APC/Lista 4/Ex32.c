#include <stdio.h>
#include <string.h>

int main()
{
  int l,c,ordem,cont=0,diagonal=0,aux;

  scanf("%d",&ordem);

  int matriz[ordem][ordem];
  int soma[ordem];

  for(l=0;l<ordem;l++)
  {
    for(c=0;c<ordem;c++)
    {
      scanf("%d",&matriz[l][c]);
      if(matriz[l][c]>9||matriz[l][c]<0)
      {
        cont++;
      }
    }
  }

  if(cont>0)
  {
    printf("MATRIZ NAO MAGICA");
  }
  else
  {

    for(l=0;l<ordem;l++)
    {
      soma[l] = 0;
      for(c=0;c<ordem;c++)
      {
          soma[l] = soma[l] + matriz[l][c];
          if(l==c)
            diagonal = diagonal+matriz[l][c];
      }
    }

    for(aux=0;aux<ordem;aux++)
    {
      if(diagonal!=soma[aux])
      {
        cont++;
      }
    }
    if(cont>0)
    {
      printf("MATRIZ NAO MAGICA\n");
    }
    else
    {
      printf("MATRIZ MAGICA\n");
    }
  }
  return 0;
}
