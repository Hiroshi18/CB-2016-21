#include <stdio.h>
#include <math.h>

int main()
{
    double PR,gasto,total=0;
    long int Q;
    //inicio lendo para testar
    scanf("%ld", &Q);
    while(Q>0)
    {
        scanf("%lf",&PR);
        //usar while aq tbm para garantir que mesmo que se ele digite mais de 1 numero errado garanta
        while(PR<=0)
        {
            scanf("%lf",&PR);
        }
        //nao precisa do if para a nova logica
        gasto=Q*PR;
        total=gasto+total;
        //lendo novamente para testar
        scanf("%ld", &Q);
    }
    //recomendo usar o while em cima nesse caso
    printf("%.2lf\n",total);
    return 0;
}

