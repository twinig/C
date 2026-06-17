#include<stdio.h>

int main(){


    float matriz[4][5];
    int i;
    int j;

    printf("PREENCHIMENTO DA MATRIZ: \n");
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("Escreva em float: %d %d", i, j);
            scanf("%f", &matriz[i][j]);
        }   
    }
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("%f\t", matriz[i][j]);
        }
        printf("\n");
    }
}