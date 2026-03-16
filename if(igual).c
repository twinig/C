#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    //definição de duas variaveis
    int x, y;

    //definição do valor das variaveis
    printf("Digite um valor inteiro:    ");
    scanf("%i", &x);
    printf("Digite outro valor inteiro:    ");
    scanf("%i", &y);

    //definição do if para x igual a y e x diferente de y
    if(x==y){
        printf("Esses numeros são iguais!");

    }
    if(x!=y){
        printf("Esses numeros são diferentes!");
        
    }

    return 0;
}
