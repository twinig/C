#include<stdio.h>

int main(){

    int m[3][3];
    int linha;
    int coluna;
    int MaiorVetor;

    printf("PREENCHIMENTO DA MATRIZ\n");
    for(linha = 0; linha < 3; linha++){
        for(coluna =0; coluna < 3; coluna++){
            printf("Digite os numeros da matriz: ");
            scanf("%d", &m[linha][coluna]);
        }
    }

    MaiorVetor = m[0][0];

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            if(m[linha][coluna] > MaiorVetor){
                MaiorVetor = m[linha][coluna];
            }
        }
    }
    printf("\nO maior vetor é: %d\n", MaiorVetor);
}