#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX1 10
#define MAX2 5
#define MAX 3
struct taluno{

  int nr;
  char nome[MAX1];
  char departamento[MAX2];
  float nota[3];
  float media;



};
int main()
{
  int i,c;
  struct taluno aluno;
  struct taluno alun[MAX];
  for(i=0;i<2;i++){
    printf("Digite a nr do aluno:\n");

    scanf("%d",&aluno.nr);

    printf("Digite o nome do alunos:\n");

    scanf("%s",&aluno.nome);

    printf("Digite o departamento do aluno:\n");

    scanf("%s",&aluno.departamento);

    printf("Digite a nota [0] do aluno:\n");

    scanf("%f",&aluno.nota[0]);

    printf("Digite a nota [1] do aluno:\n");

    scanf("%f",&aluno.nota[1]);

    printf("Digite a nota [2] do aluno:\n");

    scanf("%f",&aluno.nota[2]);

    alun[i]=aluno;
  }
  alun[0].nome[0]=toupper(alun[0].nome[0]);
  alun[1].nome[0]=toupper(alun[1].nome[0]);
  alun[2].nome[0]=toupper(alun[2].nome[0]);

  for(c=1;c<MAX1;c++)
  {
    alun[i].nome[c]=tolower(alun[i].nome[c]);
  }

  for(i=0;i<MAX;i++) {
    printf("[%d] %s\n",i,alun[i].nome);
  }
  return 0;
}
