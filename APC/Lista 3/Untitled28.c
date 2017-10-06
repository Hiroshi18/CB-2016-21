#include <stdio.h>
int main()
{
  int n,aux,a1,a2,a3,total=0;
  a1=2;
  a2=7;
  a3=3;
  scanf("%d",&n);
  if(n%3==0)
  {
    for(aux = 0; aux<(n/3);aux++)
    {
      total= total + a1+a2+a3;
      a1=a1*2;
      a2=a2*3;
      a3=a3*4;
    }
    printf("%d\n",total);
  }
  else
  {
    printf("SEM SOMA\n");
  }
  return 0;
}
