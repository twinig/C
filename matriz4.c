#include<stdio.h>

int main(){

    int m[2][3];
    int linha;
    int coluna;

    printf("PREENCHIMENTO DA MATRIZ\n");
    for(linha = 0; linha < 2; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("Digite os numeros da matriz: ", linha, coluna);
            scanf("%d", &m[linha][coluna]);
        }
    }
    for(linha = 0; linha < 2; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            if(m[linha][coluna]%2!=0){
                m[linha][coluna] = m[linha][coluna] * 0;
            }
        }
    }
    for(linha = 0; linha < 2; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("%d\t", m[linha][coluna]);
        }
        printf("\n");
    }
}