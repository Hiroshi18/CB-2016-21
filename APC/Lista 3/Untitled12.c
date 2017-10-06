#include <stdio.h>

int main ()
{
    int idade=0 ,opiniao=0 ,pessoas=0 ,soma_idades=0;
    double idade_media=0 ,n1=0 ,n2=0 ,n3=0 ,n4=0 ,n5=0 ,p1=0 ,p2=0 ,p3=0 ,p4=0 ,p5=0;

    scanf("%d" ,&idade);

    while(idade>=0){
        scanf("%d" ,&opiniao);
        while(opiniao<=0 || opiniao>5)
        {
            scanf("%d" ,&opiniao);
        }
        switch(opiniao){
            case (1):
            {
                n1+=1;
                soma_idades+=idade;
                pessoas+=1;
                break;
            }
            case(2):
            {
                n2+=1;
                soma_idades+=idade;
                pessoas+=1;
                break;
            }
            case(3):
            {
                n3+=1;
                soma_idades+=idade;
                pessoas+=1;
                break;
            }
            case(4):
            {
                n4+=1;
                soma_idades+=idade;
                pessoas+=1;
                break;
            }
            case(5):
            {
                n5+=1;
                soma_idades+=idade;
                pessoas+=1;
                break;
            }
        }
        scanf("%d" ,&idade);

    }

    idade_media=(soma_idades*1.0)/pessoas;
    p1=(n1*100.0)/pessoas;
    p2=(n2*100.0)/pessoas;
    p3=(n3*100.0)/pessoas;
    p4=(n4*100.0)/pessoas;
    p5=(n5*100.0)/pessoas;
    printf("qtde de participantes: %d\n" ,pessoas);
    printf("idade media dos participantes: %.1lf\n" ,idade_media);
    printf("Otimo: %.1lf%\n" ,p1);
    printf("Bom: %.1lf%\n" ,p2);
    printf("Regular: %.1lf%\n" ,p3);
    printf("Ruim: %.1lf%\n" ,p4);
    printf("Pessimo: %.1lf%\n" ,p5);

    return 0;
}
