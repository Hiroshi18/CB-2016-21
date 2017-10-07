#include <stdio.h>
#include <string.h>


int main()
{
  int aux, letras1=0,letras2=0;
  char string1[100],string2[100];

  scanf("%s",string1);
  scanf("%s",string2);
  letras1 =strlen(string1);
  letras2 = strlen(string2);

  if(letras1>letras2)
  {
    for(aux=0;aux<letras2;aux++)
    {
      printf("%c%c",string1[aux],string2[aux]);
    }
    for(;aux<letras1;aux++)
    {
      printf("%c",string1[aux]);
    }
  }
  else
  {
    for(aux=0;aux<letras1;aux++)
    {
      printf("%c%c",string2[aux],string1[aux]);
    }
    for(;aux<letras2;aux++)
    {
      printf("%c",string2[aux]);
    }
  }

  return 0;
}
