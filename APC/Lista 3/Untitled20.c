#include <stdio.h>

int main()
{
  int i;
  long int N;

  scanf("%ld" ,&N);

  for(i=2 ; i<N ;i++)
  {
    if(N%i==0)
    {
      printf("NAO");
      return 0;
    }else
    {
      printf("SIM");
      return 0;
    }
  }
  printf("NAO");
  return 0;
}
