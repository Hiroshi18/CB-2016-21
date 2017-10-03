#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t,pa,pb,i,ano=0,somaa=0,somab=0;
    double g1,g2;
    scanf("%d",&t);
    for (i=1;i<=t;i++)
    {
        scanf("%d %d %lf %lf",&pa,&pb,&g1,&g2);
        somaa=pa;
        somab=pb;

        while (somaa<somab)
        {
            somaa=somaa+((g1*somaa)/100);
            somab=somab+((g2*somab)/100);
            ano++;
        }
        if (ano>100)
        {
            printf("Mais de 1 seculo.\n");
            ano = 0;
        }
        else
        {
            printf("%d anos.\n",ano);
            ano = 0;
        }
    }
    return 0;
}
