#include <stdio.h>
#include <string.h>


int main()
{
  int letras1=0,letras2=0,i=0;
  char string1[100],string2[100],letra='0';

  while(letra != '\n') {
    scanf("%c", &letra);
    string1[i] = letra;
    i++;
  }
  string1[i]='\0';
  letra='0';

  while(letra != '\n') {
    scanf("%c", &letra);
    string2[i] = letra;
    i++;
  }
  string2[i]='\0';
  i=0;

  while(string1[i+1] != '\n')
  {
    printf("%c%c", string1[i],string2[i]);
    i++;
  }

  return 0;
}
