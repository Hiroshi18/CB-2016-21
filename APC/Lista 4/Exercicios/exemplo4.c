#include <stdio.h>
int main ()
{
    int array[87];
    int x=0,L,i=0;
    scanf("%d", &array[x]);
    while (array[x] != 0 &&  x < 87 )
    {
        x++;
        scanf("%d",&array[x]);
    }
    scanf("%d",&L);

    for (i = 0 ; i < x ; i++)
    {
        if(array[i] > L)
        {
            printf("%d ",array[i]);
        }
    }
    return 0;
}
