#include <stdio.h>
#include <stdlib.h>

int main(){

    int x;
    int temp;
    int resto;

    int soma = 1;

    printf("Digite um numero: ");
    scanf("%i", &x);

    temp =  x;

    while (temp>0){

        resto = temp %10;
        soma += resto * resto * resto;
        temp = temp / 10;

    }

    if (soma==x){
        printf("é um numero de armstrong %i", x);
    
    } else {
        printf("nao e um numero de armstrong %i", x);
    }

    return 0;
}