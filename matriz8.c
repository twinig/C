#include<stdio.h>

int main(){

    int m[3][3];
    int linha;
    int coluna;

    printf("PREENCHIMENTO DA MATRIZ\n");
    for(linha=0; linha<3;linha++){
        for(coluna=0;coluna<3;coluna++){
            printf("Digite os valores da matriz: ", linha, coluna);
            scanf("%d", &m[linha][coluna]);
        }
    }
    for(linha=0;linha<3;linha++){
        for(coluna=0;coluna<3;coluna++){
            if(linha == coluna){
                printf(" ");
                printf("%d\t", m[linha][coluna]);
            }
            printf("\n");
        }
    }
}