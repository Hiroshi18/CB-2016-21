#include <stdio.h>
#include <string.h>


int main()
{
  int aux, letras=0;
  char string[100];

  scanf("%s",string);
  letras = strlen(string);

  for(aux=0;aux<letras;aux++)
  {
    switch (string[aux])
    {
      case 'a':
      printf("a");
      break;
      case 'e':
      printf("a");
      break;
      case 'i':
      printf("a");
      break;
      case 'o':
      printf("a");
      break;
      case 'u':
      printf("a");
      break;
      default:
      printf("%c",string[aux]);
      break;
    }
  }
  printf("\n");
  for(aux=0;aux<letras;aux++)
  {
    switch (string[aux])
    {
      case 'a':
      printf("e");
      break;
      case 'e':
      printf("e");
      break;
      case 'i':
      printf("e");
      break;
      case 'o':
      printf("e");
      break;
      case 'u':
      printf("e");
      break;
      default:
      printf("%c",string[aux]);
      break;
    }
  }
  printf("\n");
  for(aux=0;aux<letras;aux++)
  {
    switch (string[aux])
    {
      case 'a':
      printf("i");
      break;
      case 'e':
      printf("i");
      break;
      case 'i':
      printf("i");
      break;
      case 'o':
      printf("i");
      break;
      case 'u':
      printf("i");
      break;
      default:
      printf("%c",string[aux]);
      break;
    }
  }
  printf("\n");
  for(aux=0;aux<letras;aux++)
  {
    switch (string[aux])
    {
      case 'a':
      printf("o");
      break;
      case 'e':
      printf("o");
      break;
      case 'i':
      printf("o");
      break;
      case 'o':
      printf("o");
      break;
      case 'u':
      printf("o");
      break;
      default:
      printf("%c",string[aux]);
      break;
    }
  }
  printf("\n");
  for(aux=0;aux<letras;aux++)
  {
    switch (string[aux])
    {
      case 'a':
      printf("u");
      break;
      case 'e':
      printf("u");
      break;
      case 'i':
      printf("u");
      break;
      case 'o':
      printf("u");
      break;
      case 'u':
      printf("u");
      break;
      default:
      printf("%c",string[aux]);
      break;
    }
  }
  return 0;
}
