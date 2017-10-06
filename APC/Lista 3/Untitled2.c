#include<stdio.h>
int main ()
{
    int c,i,cMc,cmc;
    double v,cm,Mc,mc;

    scanf("%d %lf",&c,&v);

    cMc=c;
    cmc=c;

    if(v<=5000)
    {
        cm=(v*1.5)/100;
    }
    if(v>5000 && v<15000)
    {
        cm=(v*3.5)/100;
    }
    if(v>=15000)
    {
        cm=(v*4.7)/100;
    }
    Mc=cm;
    mc=cm;

    for(i=1; i<=9; i++)
    {
        scanf("%d %lf",&c,&v);
        if(v<=5000)
        {
            cm=(v*1.5)/100;
        }
        if(v>5000 && v<15000)
        {
            cm=(v*3.5)/100;
        }
        if(v>=15000)
        {
            cm=(v*4.7)/100;
        }

        if (cm>=Mc)
        {
            Mc=cm;
            cMc=c;
        }
        if(cm<=mc)
        {
            mc=cm;
            cmc=c;
        }
    }
    printf("%d %.2lf %d %.2lf\n",cMc,Mc,cmc,mc);

    return 0;
}
