#include <stdio.h>
#define max 500

int main()
{
    int num[max], impresso[max],i ,j,aux=0, ocorridos=0;// o!=0

    for (i=0; i<max ;i++)
    {
        scanf("%d" ,&num[i]);
    }
    printf ("%d " ,num[0]);// no print vc nao usa o & so no scanf e faltou um espaco
    impresso[aux]=num[0];//nao e comparacao e uma atribuicao
    aux++;

    for (i=0 ; i<max ; i++)
    {
        for(j=0 ; j<aux ; j++)
        {
            if (num[i]==impresso[j])
            {
                ocorridos=1;
            }
        }
        if(ocorridos==0)
        {
            printf ("%d ", num[i]);// faltou um espaco
            impresso [aux]=num[i];
            aux++;
        }
        else
        {
            ocorridos=0;
        }
    }
    return 0;
}
