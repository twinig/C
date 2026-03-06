#include<stdio.h>
#include<stdlib.h>

int main(){

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade<18){
        printf("Voce e menor de idade!");
    }
    if(idade>18){
        printf("Voce e maior de idade!");
    }
    if(idade==18){
        printf("Voce é maior de idade!");
    }
}