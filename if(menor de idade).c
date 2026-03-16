#include<stdio.h>
#include<stdlib.h>

int main(){

    //definição da variavel
    int idade;

    //definição do valor
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    //definição do valor de if para classificação de idade
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