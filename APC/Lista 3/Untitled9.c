#include <stdio.h>
int main(void)
{
    int i=0,x,t=0,melhor=100000000,pior=0,imelhor,ipior,y;
//aqui
    scanf("%d",&x);
    while(x!=0)
    {
        i++;
        y=x*(-1);
        if(x<0)
        {
            x=y;
            scanf("%d",&x);
            x=x+y;
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
//aqui
        scanf("%d",&x);
    };

    printf("Melhor volta: %d - %d seg\nPior volta: %d - %d seg\nTempo total: %d seg\n",imelhor,melhor,ipior,pior,t);

    return 0;
}
