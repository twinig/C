#include<stdio.h>
#include<stdlib.h>

int main(){
    float x, y, soma;
    
    printf("Digite o numeral: ");
    scanf("%f", &x);
    printf("Digite o numeral: ");
    scanf("%f", &y);

    soma =  x + y;

    if(soma>20){
        printf("O acrescimo do valor e de: %f", soma + 8);
    }
    if(soma<=20){
        printf("o desconto do valor e de %f", soma - 5);
    }
}