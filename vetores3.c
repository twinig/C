#include<stdio.h>

int main(){

    int N;    

    printf("Digite o tamanho da Array: ");
    scanf("%d", &N);
    char array[N];
    printf("Digite os caracteres: ");
    scanf("%s", array);

    printf("[%s]\n", array);
}