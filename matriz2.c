#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){

    int matriz[2][3]; //cria-se a matriz ne papai
    srand(time(NULL)); //semente de aleatoriedade baseada no pc
    int contador=0; //contador 

    for(int i = 0; i < 2; i++){ //laço de repetição envolvendo a linha das matrizes (i)
        for(int j = 0; j < 3; j++){ //mesma coisa soq pra coluna(j)
            matriz[i][j] = 1 + (rand() % 4); //pega a matriz e soma com a função do rand, de aleatoriedade, ou seja, pega numeros aleatorios e coloca na matriz
            if(matriz[i][j] == 4){ //conta quantos numeros 4 aparecem
                contador++; //aqui ele soma pro contador, ou seja, se tiver um numero 4, aparece 1
            }
        }
    }
    for(int i = 0; i < 2; i++){ 
        for(int j = 0; j < 3; j++){ //repete tudo pro printf
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");        

    }        
    printf("\no numero 4 aparece: %d   ", contador); //aqui aparece ;?


}