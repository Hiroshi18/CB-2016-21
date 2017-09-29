#include<stdio.h>
int main()
{
    double d, rend,soma=0, lmd,total=0;
    int i;
    for (i=1; i<=12; i++)
    {
        scanf("%lf", &d);
        total = total + d;
        if (total<10000)
        {
            rend = (total * 0.0175);
        }
        if (total>=10000)
        {
            rend = (total * 0.0225);
        }
        soma = soma + rend;
        total = total + rend;
    }
    printf("%.2lf\n", soma);
    return 0;
}
/*
12805 7831 1558 194 5745
6942 4683 2885 180 5873
5973 4091
*/
