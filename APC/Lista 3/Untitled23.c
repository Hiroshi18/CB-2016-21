#include <stdio.h>

int main()
{
    //pior volta = maior tempo
    //melhor volta = menor tempo
    int i=1,soma=0;
    int tempo=1,j,menor=10000000,maior=0,melhorindex=1,piorindex=1,novot;

    for (j=1; tempo>0; j++)
    {
        scanf ("%d",&tempo);
        if(tempo!=0)
        {
            if (tempo>0)
            {
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
                soma = soma + tempo;

            }
            if (tempo<0)
            {
                tempo = tempo*-1;
                soma = tempo + soma;
                if (tempo>maior)
                {
                    maior = tempo;
                    piorindex=j;
                }
                scanf("%d",&tempo);
                maior = maior + tempo;
                soma = tempo + soma;
            }
        }
    }
    printf("Melhor volta: %d - %d seg\nPior volta: %d - %d seg\n",melhorindex,menor,piorindex,maior);
    printf("Tempo total: %d seg",soma);
}
