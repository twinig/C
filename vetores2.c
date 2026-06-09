#include<stdio.h>

int main(){

    int v[5]={33, 45, 12, 56, 98};
    int soma = 0;
    int i;

    for(i=0; i<5; i++){
        soma += v[i];    
        printf("Soma: %d\n", soma);
    }



}