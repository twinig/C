#include<stdio.h>


int main(){

    int matriz[4][4] = {
        {1, 2, 4, 5},
        {3, 1, 5, 6},
        {9, 9, 1, 11},
        {12, 4, 5, 1}
    };
    int SomaDiagonal = 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i == j){
                SomaDiagonal += matriz[i][j];
            }
        }
    }
    printf("%d\n", SomaDiagonal);
}