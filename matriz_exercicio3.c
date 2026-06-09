#include<stdio.h>

int main(){

    int matriz[5];
    int i;

    for(i=0;i<5;i++){
        printf("Digite um numero inteiro: %d", i);
        scanf("%d", &matriz[i]);
    }
    printf("\n os numeros inteiros guardados foram: ");
    for(i=0;i<5;i++){
        printf("%d", matriz[i]);
    }
    return 0;
}