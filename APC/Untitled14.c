#include <stdio.h>

int main()
{
    int NTV,i,TV,penalidade=0,NP=0,NM=0,TT=0,TM=0,TP=0;

    scanf("%d",&NTV);

    for(i=1 ; i<=NTV ; i++)
    {
        scanf("%d",&TV);
        if(TV<0)
        {
            switch(TV)
            {
                case(-1):
                penalidade=10;
                break;
                case(-2):
                penalidade=25;
                break;
                case(-3):
                penalidade=40;
                break;
            }

            scanf("%d",&TV);
            while(TV<0)
            {
                scanf("%d",&TV);
            }
        }
        TV+=penalidade;

        if(i==1)
        {
            TM=TV;
            TP=TV;
        }

        if(TV<=TM)
        {
            TM=TV;
            NM=i;
        }
        else if(TV>=TP)
        {
            TP=TV;
            NP=i;
        }
        penalidade=0;
        TT+=TV;
    }
    printf("Melhor volta: %d - %d seg\n",NM,TM);
    printf("Pior volta: %d - %d seg\n",NP,TP);
    printf("Tempo total: %d seg\n",TT);

    return 0;
}
