#include<stdio.h>
#include<stdlib.h>

int main()
{   
    //definição da variavel
    float x;

    //definição do valor da variavel
    printf("Digite um numero:");
    scanf("%f", &x);
    
    //definição do if em trés possibilidades
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