#include <stdio.h>
#include <math.h>

int main()
{
  double S,SN,total=0,aumento;

  do{
    scanf("%lf", &S);
    if(S<500 && S>0){
      aumento=(S*0.15);
      SN=S+aumento;
      total=aumento+total;
      printf("%.2lf ",SN);
    }
    if(S>=500 && S<=1000){
      aumento=(S*0.10);
      SN=S+aumento;
      total=aumento+total;
      printf("%.2lf ",SN);
    }
    if(S>1000){
      aumento=(S*0.05);
      SN=S+aumento;
      total=aumento+total;
      printf("%.2lf ",SN);
    }
  }while(S>0);
  printf("%.2lf\n",total);
  return 0;
}
