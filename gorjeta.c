#include<stdio.h>
#include<stdlib.h>

int main(){

    //definição de variavel
    float total;

    //definindo o valor da variavel
    printf("A despensa do restaurante foi de: ");
    scanf("%f", &total);


    //imprimindo o valor da gorjeta + 10%
    printf("O valor total e igual a: %2.f \n", total*1.1);

    system("pause");
    return 0;

}