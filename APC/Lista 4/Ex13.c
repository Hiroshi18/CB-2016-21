#include <stdio.h>

int main()
{
  int aux, letras=0;
  char string[80];

  scanf("%s",&string);
  for(aux=0;string[aux]!='\0';aux++)
  {
    if(string[aux]!='\0')
      letras++;
  }
  printf("%d\n",letras);
  return 0;
}
