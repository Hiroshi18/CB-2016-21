#include <stdio.h>
int main()
{
    int soma=0;
    int tempo,j=1,menor=100000,maior=0,melhorindex,piorindex,penalidade=0;

    for (j=1; tempo>0; j++)
    {
        scanf ("%d",&tempo);
        if(tempo!=0)
        {
            if (tempo<0)
            {
                penalidade = tempo*-1;
                scanf("%d",&tempo);
                j--;

            }
            if (tempo>0)
            {
                tempo += penalidade;
                if (tempo>maior)
                {
                    maior = tempo;
                    piorindex=j;
                }
                if (tempo<menor)
                {
                    menor = tempo;
                    melhorindex=j;
                }
                penalidade=0;
                soma += tempo;
            }
        }
    }
    printf("Melhor volta: %d - %d seg\n",melhorindex,menor);
    printf("Pior volta: %d - %d seg\n",piorindex,maior);
    printf("Tempo total: %d seg\n",soma);
}
