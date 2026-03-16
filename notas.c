#include<stdio.h>
#include<stdlib.h>

int main()
{
    //definindo as variaveis
    float x, y;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &x);
    printf("Digite a segunda nota: ");
    scanf("%f", &y);
    //definindo o valor das variaveis

    float media = (x+y)/2;
    //calculo da media

    if(media>=7){
        printf("APROVADO!");
    }
    if(media<4){
        printf("REPROVADO!");
    }

    //if (media>=4 && media<7){ }
    
    if(media >= 4){
        if(media<7){
            printf("recuperacao!");
        }
    }
    return 0;
}