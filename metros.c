#include<stdio.h>
#include<stdlib.h>

int main()
{
    //definindo a variavel
    float m;

    //definindo o valor da variavel
    printf("Digite os metros: ");
    scanf("%f", &m);
    
    //imprimindo o valor da variavel fazendo o calculo
    printf("O valor em centimetros e: %4.f", m*100);
    return 0;
}