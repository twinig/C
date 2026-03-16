#include <stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    //definindo a variavel
    int x;

    //definindo o valor da variavel
    printf("Digite um valor:   ");
    scanf("%d", &x);

    //definindo if para multiplos de 5
    if(x%5==0){
        printf("O valor e multiplo de 5!");
    }
     if(x%5!=0){
        printf("O valor nao e multiplo de 5!");
    }
    return 0;
}
