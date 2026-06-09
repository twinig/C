#include<stdio.h>

int main(){

    int matriz[2][2];
    int linha;
    int coluna;

    printf("PREENCHIMENTO DA MATRIZ");

    for(linha=0;linha<2;linha++){
        for(coluna=0;coluna<2;coluna++){
            printf("Digite os numeros da matriz:", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    for(linha=0;linha<2;linha++){
        for(coluna=0;coluna<2;coluna++){
            printf("\t%d", matriz[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}