#include<stdio.h>
#include<stdlib.h>

int main(){

    float A;
    int i;

    printf("Digite sua altura:");
    scanf("%f", &A);
    printf("digite sua idade:");
    scanf("%i", &i);

    if(i>=12 && A>=1.40){
        printf("pode entrar no brinquedo.");
    }
    return 0;
}
