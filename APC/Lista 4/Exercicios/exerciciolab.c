#include <stdio.h>
#include <stdlib.h>
double fneuronio(double *entrada,double *pesos, double T);

int main()
{
    int i,j;
    double entrada[10],pesos[10];
    double T, neuronio;

    printf("Por favor digite os valores de entrada:\n");

    for(i=0;i<10;i++)
    {
        scanf("%lf",&entrada[i]);
    }

    printf("Por favor digite os pesos:\n");
    for(j=0;j<10;j++)
    {
        scanf("%lf",&pesos[i]);
    }

    printf("Por favor digite o valor do limiar:\n");

    scanf("%lf",&T);

    neuronio = fneuronio(entrada,pesos,T);
    if(neuronio==0)
    {
        printf("Neuronio Inibido");
    }
    else
    {
        printf("Neuronio Ativado!");
    }
    return 0;
}


double fneuronio(double entrada[], double pesos[], double T)
{
    double a[10],b=0;
    int i,j,neuronio;


    for(i=0;i<10;i++)
    {
        a[i]=(entrada[i]*pesos[i]);
    }
    for(j=0;j<10;j++)
    {
        b+=a[i];
    }

    if(b>T)
    {
        neuronio=1;
    }
    else
    {
        neuronio=0;
    }

    return neuronio;
}
