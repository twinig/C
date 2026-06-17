#include <stdio.h>
#include <string.h>

int main() {

    char palavra1[50];
    char palavra2[50];

    printf("Digite a palavra 1: ");
    scanf("%s", palavra1);
    printf("Digite a palavra 2: ");
    scanf("%s", palavra2);

    if(strlen(palavra1) == strlen(palavra2)){
        printf("Mesmo tamanho\n");
    }
    else if(strlen(palavra1) > strlen(palavra2)){
        printf("A primeira palavra é maior!");
    }
    else if(strlen(palavra1) < strlen(palavra2)){
        printf("A segunda palavra é maior!");
    }

    if(strcmp(palavra1, palavra2) == 0){
        printf("Sao a mesma palavra!");
    }
    else if(strcmp(palavra1, palavra2) != 0){
        printf("Sao palavras diferentes! ");
    }

    return 0;
}