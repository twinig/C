#include<stdio.h>
#include<stdlib.h>

int main()
{
    float m;

    printf("Digite os metros: ");
    scanf("%f", &m);
    
    printf("O valor em centimetros e: %4.f", m*100);
    return 0;
}