#include<stdio.h>

int main()
{
    double rp=0,rs=0,r,media,maior;
    int aux;
    scanf("%lf",&r);
    maior = r;
    rs = rs+r;

    for(aux=0; aux<5; aux++)
    {
        scanf("%lf",&r);
        rs = rs+r;

        if(r>maior)
            maior = r;
    }
    rp = 1/rs;
    media = rs/6;

    printf("%.4lf %.4lf %.4lf\n",rs,rp,maior-media);
    return 0;
}
