#include<stdio.h>
int main ()
{
    long int n,i,fat=1,aux,cont=0;
    scanf("%d",&n);
    while(n<0)
    {
        scanf("%d",&n);
    }
    //Calculo do fatorial
    for(i=1; i<=n; i++)
    {
        fat = fat*i;
    }

    //vejo se é 2
    if (fat==2||fat==1)
    {
        printf("NAO PRIMO\n",i);
    }
    else
    {   //vou ate n!
        for(i=2; i<fat; i++)
        {
            //divido todos os valores de 'i'
            for(aux=1; aux<=i; aux++)
            {
                if(i%aux==0)
                {
                    cont++;
                }
            }

            if(cont>2)
            {
                cont=0;
            }
            else
            {
                printf("%d ",i);
                cont=0;
            }
        }
        printf("\n");
    }
    return 0;
}
