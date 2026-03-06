#include<stdio.h>
#include<stdlib.h>

int main()
{
    float nm1, nm2, nm3, nm4, media;

    printf("Digite o primeiro numero: ");
    scanf("%f", &nm1);
    printf("Digite o segundo numero: ");
    scanf("%f", &nm2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &nm3);
    printf("Digite o quarto numero: ");
    scanf("%f", &nm4);

    media=(nm1+nm2+nm3+nm4)/4;
    printf("A media dos numeros é %.3f", media);
    return 0;
}
