#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x;

    printf("Digite o valor de x:    ");
    scanf("%lf", &x);

    if(x==2){
        printf("O valor do denominador nao pode ser 0!");
    }
    if(x!=2){
        printf("O valor da equacao f(x) e igual a: %.4lf", 8/(2-x));
    }
    system("pause");
    return 0;
}