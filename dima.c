#include<stdio.h>
#include<stdlib.h>

int main()
{
    int altura;
    
    printf("Digite a altura do diamante: ");
    scanf("%d", &altura);
    
    printf("\n");
    
    for (int i = 1; i <= altura; i++) {
        for (int j = 0; j < altura - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    

    for (int i = altura - 1; i >= 1; i--) {
        for (int j = 0; j < altura - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}