#include <stdio.h>
int main(void)
{
    int x,y,i=0,soma=0;
    double media,o=0,b=0,r=0,ru=0,p=0,mo,mb,mr,mru,mp;
    char d;
    d= '%';
    scanf("%d",&x);
    scanf("%d",&y);
    while(x>=0)
    {    while(y!=1&&y!=2&&y!=3&&y!=4&&y!=5)
        {
            scanf("%d",&y);
        }
        i++;
        soma+=x;

        if(y==1)
        {
            o++;
        }
        if(y==2)
        {
            b++;
        }
        if(y==3)
        {
            r++;
        }
        if(y==4)
        {
            ru++;
        }
        if(y==5)
        {
            p++;
        }
        scanf("%d",&x);
        if(x<0){
            break;
        }
        else{ scanf("%d",&y);}
    }
    media=(double)soma/i;
    mo=(o/i)*100;
    mb=(b/i)*100;
    mr=(r/i)*100;
    mru=(ru/i)*100;
    mp=(p/i)*100;
    printf("qtde de participantes: %d\nidade media dos participantes: %.1lf\nOtimo: %.1lf%c\nBom: %.1lf%c\nRegular: %.1lf%c\nRuim: %.1lf%c\nPessimo: %.1lf%c",i,media,mo,d,mb,d,mr,d,mru,d,mp,d);
    return 0;

}
