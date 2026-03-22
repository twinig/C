#include <stdio.h>
#include <stdlib.h>

int main(){

    int nm;

    printf("Digite um numero: ");
    scanf("%d", &nm);

    printf("Crescente: ");
    for (int i = 1; i <= nm; i++){
        printf("%d", i);
    }

    printf("Decrescente: ");
    for (int i = nm; i >= 1; i--){
        printf("%d", i);
    }

    printf("\n");

    return 0;
}