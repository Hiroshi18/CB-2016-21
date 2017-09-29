#include<stdio.h>
#include<math.h>

int main()
{
    double x,y,somaX=0,somaY=0,somaXY=0,somaX2=0,somaY2=0,resultado;
    int aux=0;
    for(aux=0; aux<10; aux++)
    {
        scanf("%lf",&x);
        somaX = x + somaX;
        somaX2 = somaX2+x*x;

        scanf("%lf",&y);
        somaY = y + somaY;
        somaY2 = somaY2+y*y;

        somaXY = somaXY + x*y;
    }
    resultado = (10*somaXY-(somaX*somaY))/(pow((10*somaX2-somaX*somaX),0.5)*pow((10*somaY2-somaY*somaY),0.5));

    printf("%.2lf",resultado);
    return 0;
}

