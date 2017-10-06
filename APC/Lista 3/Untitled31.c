#include <stdio.h>

int main()
{
  long int n=0 ,nft=1;
  int i ,cont=0 ,aux=2;

  scanf("%ld" ,&n);

  if(n<=2 && n>=0)
  {
    printf("NENHUM PRIMO");
  }else if(n<0)
  {
    while(n<0)
    {
      scanf("%ld" ,&n);
    }
  }
  for( ; n >=1 ; n--){
    nft*= n;
  }

  for(i=2 ; i<nft ; i++)
  {
    //for dentro de um for para verificar cada numero primo
    for(aux=1 ; aux<=i ; aux++)
    {
      if(i%aux==0)
      //logica do contador igual a sua
      {
          cont++;
      }
    }
    //verifica o contador para cada numero do for
    if(cont>2)
    {
      cont=0;
    }
    else
    {
      printf("%d ",i);
      cont=0;
    }
  }

  return 0;
}
