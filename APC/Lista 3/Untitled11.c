#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f ,melhor_f ,pior_f ,i;
    double v , comicao ,maior_comicao ,menor_comicao;

    for(i=1 ; i<=10 ; i++){
        scanf("%d%lf",&f ,&v);

        if(v<=5000){
            comicao=(v*0.01)*1.5;
        }else if(v>5000 && v<=15000){
            comicao=(v*0.01)*3.5;
        }else{
            comicao=(v*0.01)*4.7;
        }

        if(i==1){
            maior_comicao=comicao;
            menor_comicao=comicao;
            melhor_f=f;
            pior_f=f;
        }else if(comicao>=maior_comicao){
            maior_comicao=comicao;
            melhor_f=f;
        }else if(comicao<=menor_comicao){
            menor_comicao=comicao;
            pior_f=f;
        }

    }
    printf("%d %.2lf %d %.2lf" ,melhor_f ,maior_comicao ,pior_f ,menor_comicao);
    return 0;
}
