#include <stdio.h>
int main(void)
{
    int dn,mn,an,dh,mh,ah,da,dm,dd,y,x,z;
    do
    {
        scanf("%d",&dn);
    }
    while(dn<=0||dn>30);
    do
    {
        scanf("%d",&mn);
    }
    while(mn<=0||mn>12);
    do
    {
        scanf("%d",&an);
    }
    while(an<=0||an>2020);

    do
    {
        scanf("%d",&dh);
    }
    while(dh<=0||dh>30);
    do
    {
        scanf("%d",&mh);
    }
    while(mh<=0||mh>12);
    do
    {
        scanf("%d",&ah);
    }
    while(ah<=0||ah>2020||ah<=an);

    da=((ah-an)*360);
    dm=(mh-mn-1)*30;
    dd=(dh-(dn-30));

    x = da+dm+dd;
    printf("%d",x);
    return 0;
}
