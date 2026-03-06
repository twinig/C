#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int x, y;

    printf("Digite um valor inteiro:    ");
    scanf("%i", &x);
    printf("Digite outro valor inteiro:    ");
    scanf("%i", &y);

    if(x==y){
        printf("Esses numeros são iguais!");

    }
    if(x!=y){
        printf("Esses numeros são diferentes!");
        
    }

    return 0;
}
