#include <stdio.h>
#include <string.h>

int main()
{
  int ordem,rotacao,soma=0,l,c;

  scanf("%d",&ordem);

  int matriz[ordem][ordem];

  scanf("%d",&rotacao);

  //le a matriz

  switch(rotacao)
  {
    case 360:
    for(l=0;l<ordem;l++)
    {
      for(c=0;c<ordem;c++)
      {
        scanf("%d",&matriz[l][c]);
      }
    }
    break;

    case 270:
    for(c=(ordem-1);c>=0;c--)
    {
      for(l=0;l<ordem;l++)
      {
        scanf("%d",&matriz[l][c]);
      }
    }
    break;

    case 180:
    for(l=(ordem-1);l>=0;l--)
    {
      for(c=(ordem-1);c>=0;c--)
      {
        scanf("%d",&matriz[l][c]);
      }
    }
    break;

    case 90:
    for(c=0;c<ordem;c++)
    {
      for(l=(ordem-1);l>=0;l--)
      {
        scanf("%d",&matriz[l][c]);
      }
    }
    break;
  }
  for(l=1;l<ordem;l=l+2)
  {
    for(c=0;c<ordem;c++)
    {
      soma = soma + matriz[l][c];
    }
  }
  printf("%d",soma);
  return 0;
}
