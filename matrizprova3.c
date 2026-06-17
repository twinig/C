#include<stdio.h>

int main(){


    int m1[2][2] = {
        {3, 4},
        {1, 6}
    };
    int m2[2][2] = {
        {5, 9},
        {6, 7}
    };

    int mResult[2][2];
    int i; 
    int j;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            mResult[i][j] += m2[i][j] + m1[i][j]; 
        }
    }
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d\t", mResult[i][j]);
        }
        printf("\n");
    }
}