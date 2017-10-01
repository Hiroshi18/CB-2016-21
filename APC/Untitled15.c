#include <stdio.h>
int main(void)
{
  int x,y,i=0,soma=0;
  double media,o=0,b=0,r=0,ru=0,p=0,mo,mb,mr,mru,mp;

  scanf("%d",&x);

  while(x>0)
  {
    i++;
    scanf("%d",&y);
    soma+=x;
    while(y>5||y<1)
    {
      scanf("%d",&y);
    }

    if(y==1)
    {
      o++;
    }
    if(y==2)
    {
      b++;
    }
    if(y==3)
    {
      r++;
    }
    if(y==4)
    {
      ru++;
    }
    if(y==5)
    {
      p++;
    }
    scanf("%d",&x);
  }

  media=(double)soma/i;
  mo=(o/i)*100;
  mb=(b/i)*100;
  mr=(r/i)*100;
  mru=(ru/i)*100;
  mp=(p/i)*100;
  printf("qtde de participantes: %d\nidade media dos participantes:  %.1lf\nOtimo:  %.1lf%\nBom:  %.1lf%\nRegular:  %.1lf%\nRuim:  %.1lf%\nPessimo:  %.1lf%",i,media,mo,mb,mr,mru,mp);
  return 0;

}
