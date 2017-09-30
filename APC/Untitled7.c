#include <stdio.h>
int main(void)
{
    double dep,total = 0,totalDep=0,totalFinal;
    int i;

    for(i=1; i<=12; i++)
    {
        scanf("%lf",&dep);
        totalDep = totalDep + dep;
        total = total + dep;

        if(total>10000)
        {
            total = total*1.0225;
        }
        else
        {
            total = total*1.0175;
        }
    }
    totalFinal = total - totalDep;
    printf("%.2lf",totalFinal);
    return 0;
}
