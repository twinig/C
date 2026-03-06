#include<stdio.h>
#include<stdlib.h>

int main()
{
    float x;

    printf("Digite um numero:");
    scanf("%f", &x);
    
    if(x>0){
        printf("Positivo");
    }
    if(x<0){
        printf("Negativo");
    }
    if(x==0){
        printf("Nulo");
    }
}