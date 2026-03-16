#include<stdio.h>
#include<stdlib.h>

int main(){
    //definindo as variaveis
    int nm1, nm2, soma;
    printf("Digite o primeiro numero: ");
    scanf("%d", &nm1);
    printf("Digite o segundo numero: ");
    scanf("%d", &nm2);
    //definindo o valor das variaveis

    soma = nm1 + nm2;

    //imprimindo o valor das variaveis
    printf("A soma dos dois numeros e: %d", soma);
    return 0;
}