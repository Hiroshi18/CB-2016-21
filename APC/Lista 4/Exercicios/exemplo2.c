#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numero[300];
    int i=0,j=0;
    do
    {
        scanf("%d",&numero[j]);
        j++;
    }
    while(numero[j-1]>0||j>300);

    for (i=(j-2); i>=0; i--)
    {
        printf("%d ",numero[i]);
    }
    printf("\n");
    return 0;
}
