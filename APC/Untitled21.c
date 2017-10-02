#include <stdio.h>
int main ()
{
    int tempo,nv,mv=0,pv=0,tmv=0,tpv=0,pena=0,tt=0,i=0;
    scanf("%d",&nv);
    for(i=1; i<=nv; i++)
    {
        scanf("%d",&tempo);

            if(tempo==-1)
            {
                pena = 10;
                scanf("%d",&tempo);
            }
            if(tempo==-2)
            {
                pena = 25;
                scanf("%d",&tempo);
            }
            if(tempo==-3)
            {
                pena = 40;
                scanf("%d",&tempo);
            }
        tempo = pena +tempo;
        pena=0;
        tt=tempo+tt;
        if(mv==0 && pv==0)
        {
            mv=tempo;
            pv=tempo;
            tmv=i;
            tpv=i;
        }
        if(tempo<mv)
        {
            mv=tempo;
            tmv=i;
        }
        if(tempo>pv)
        {
            pv=tempo;
            tpv=i;
        }
    }
    printf("Melhor volta: %d - %d seg\n",tmv,mv);
    printf("Pior volta: %d - %d seg\n",tpv,pv);
    printf("Tempo total: %d seg",tt);
    return 0;
}
