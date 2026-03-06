#include<stdio.h>
#include<stdlib.h>

int main()
{
    float T, vm, distancia;

    printf("O tempo de viagem foi: ");
    scanf("%f", &T/60);
   
    printf("a velocidade media da viagem foi: ");
    scanf("%f", &vm);

    printf("A velocidade media da viagem foi de: %f\n", vm);
    printf("O tempo gasto na viagem foi de: %.3f\n", T);
    printf("A distancia percorrida da viagem foi de: %3.f\n", vm*T, distancia);
    distancia=vm*T;
    printf("A quantidade de litros utilizada foi de: %3.f", distancia/12);
    return 0;
}