#include <stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int x;

    printf("Digite um valor:   ");
    scanf("%d", &x);

    if(x%5==0){
        printf("O valor e multiplo de 5!");
    }
     if(x%5!=0){
        printf("O valor nao e multiplo de 5!");
    }
    return 0;
}
