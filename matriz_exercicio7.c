#include<stdio.h>

int main(){

    int m[3][3];
    int linha;
    int coluna;
    int somaLinha = 0;

    printf("PREENCHIMENTO DA MATRIZ\n");

    for(linha=0;linha<3;linha++){
        for(coluna=0;coluna<3;coluna++){
            printf("Digite os numeros da matriz", linha, coluna);
            scanf("%d", &m[linha][coluna]);
        }
    }
    for(linha=0;linha<3;linha++){
        for(coluna=0;coluna<3;coluna++){
            if(linha == 0){
                somaLinha += m[linha][coluna];
            }
        }
    }
    printf("\nA Soma de todos os elementos da primeira linha é de %d\n", somaLinha);
}