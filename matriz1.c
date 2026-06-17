#include<stdio.h>

int main(){

    int matriz[3][5] = {
        {4, 5, 6, 7, 8},
        {3, 3, 2, 3, 3},
        {5, 4, 3, 2, 1}
    };
    int i;

    for(i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            matriz[i][j] = matriz[i][j] * 2;
        }
    }
    printf("Matriz Resultante\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}