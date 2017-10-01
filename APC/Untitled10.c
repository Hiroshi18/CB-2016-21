#include <stdio.h>
int main(void)
{
    int i,x,t=0,melhor=100000000,pior=0,imelhor,ipior,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&x);
        if(x==-1)
        {

            scanf("%d",&x);
            x=x+10;
        }
        if(x==-2)
        {

            scanf("%d",&x);
            x=x+25;
        }
        if(x==-3)
        {

            scanf("%d",&x);
            x=x+40;
        }
        if(melhor>x)
        {
            melhor=x;
            imelhor=i;
        }
        if(pior<x)
        {
            pior=x;
            ipior=i;
        }
        t=x+t;
    }
    printf("Melhor volta: %d - %d seg\nPior volta: %d - %d seg\nTempo total: %d seg\n",imelhor,melhor,ipior,pior,t);

    return 0;
}
