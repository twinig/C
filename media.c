#include<stdio.h>
#include<stdlib.h>

int main()
{
    //definição das variaveis
    
    float nm1, nm2, nm3, nm4, media;
    //float nm1
    //float nm2
    //float nm3
    //float nm4
    //float media

    //definição do valor das variaveis
    printf("Digite o primeiro numero: ");
    scanf("%f", &nm1);
    printf("Digite o segundo numero: ");
    scanf("%f", &nm2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &nm3);
    printf("Digite o quarto numero: ");
    scanf("%f", &nm4);

    //calculo da media das variaveis
    media=(nm1+nm2+nm3+nm4)/4;
    //imprimindo a media
    printf("A media dos numeros e %.3f", media);
    return 0;
}
