#include<stdio.h>
#include<stdlib.h>

int main(){

    int nm1, nm2, soma;
    printf("Digite o primeiro numero: ");
    scanf("%d", &nm1);
    printf("Digite o segundo numero: ");
    scanf("%d", &nm2);

    soma = nm1 + nm2;

    printf("A soma dos dois numeros e: %d", soma);
    return 0;
}