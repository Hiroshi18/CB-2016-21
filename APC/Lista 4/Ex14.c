#include <stdio.h>

int main()
{
  int aux, letras=0;
  char string[100];

  scanf("%s",&string);
  for(aux=0;string[aux]!='\0';aux++)
  {
    if(string[aux]!='\0')
      letras++;
  }
  letras--;
  for(aux=letras;aux>=0;aux--)
  {
    printf("%c",string[aux]);
  }
  printf("\n");
  return 0;
}
