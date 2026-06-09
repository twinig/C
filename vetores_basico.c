#include<stdio.h>
#include<stdlib.h>

int main(){
    //criar var do tipo array
    int vet[5];
    int soma;
    int i;

    soma = 0;

    //grava uma info
    vet[0] = 33;
    vet[1] = 45;
    vet[2] = 13;
    vet[3] = 12;
    vet[4] = 98;

    for( i = 0; i < 5; i++){
        soma += vet[i];
        printf("%d\n", soma);
    }  return 0;
}