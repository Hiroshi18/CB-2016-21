#include <stdio.h>

int main()
{
    int NTV,i,TV,penalidade=0,qual_volta=0,NP=0,NM=0,TT=0,TM=1000000,TP=-1000000,total_voltas=0;

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
            qual_volta+=1;
            TV+=penalidade;
            if(TV<TM)
            {
                TM=TV;
                NM=qual_volta;
            }
            else if(TV>TP)
            {
                TP=TV;
                NP=qual_volta;
            }
            penalidade=0;
            TT+=TV;
        }
        else
        {
            qual_volta+=1;
            TV+=penalidade;
            if(TV<TM)
            {
                TM=TV;
                NM=qual_volta;
            }
            else if(TV>TP)
            {
                TP=TV;
                NP=qual_volta;
            }
            penalidade=0;
            TT+=TV;
        }
        total_voltas+=1;
    }

    printf("Melhor volta: %d - %d seg\n",NM,TM);
    printf("Pior volta: %d - %d seg\n",NP,TP);
    printf("Tempo total: %d seg\n",TT);

    return 0;
}
