#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){

    srand(time(NULL));

    int m[2][3];
    int i;
    int j;
    int x;
    int contador = 0;

    printf("PREENCHIMENTOD DE MATRIZ ALEATORIA UHULLLLL");
    printf("\nDigita um numero ai bobao: ");
    scanf("%d", &x);

    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            m[i][j] =  1 + rand() % 6;
            if(m[i][j] == x){
                contador++;
            }
        }
        printf("\n");
    }
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    printf("O numero %d aparece : %d vezes ", x, contador);

}