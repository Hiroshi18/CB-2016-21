#include <stdio.h>


int main()
{
  int num[500];
  int num2[500];
  int i, j, count;
  for (i = 0; i < 500; i++)
  {
    scanf("%d", &num[i]);
    num2[i]=num[i];
  }

  for (i = 0; i < 500; i++)
  {
    count = 0;
    for (j = 0; j <= i; j++)
    {
      if (num[i] == num2[j])
        count++;
    }
    if (count==1)
      printf("%d ", num[i]);
  }

  return 0;
}
