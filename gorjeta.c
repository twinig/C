#include<stdio.h>
#include<stdlib.h>

int main(){

    float total;

    printf("A despensa do restaurante foi de: ");
    scanf("%f", &total);


    printf("O valor total e igual a: %2.f", total*1.1);

    return 0;

}