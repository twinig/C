#include<stdio.h>

int main(){

    int m[2][2];
    int linha;
    int coluna;

    printf("PREENCHIMENTO DE MATRIZ\n");

    for(linha=0;linha<2;linha++){
        for(coluna=0;coluna<2;coluna++){
            printf("Digite o valor para [%d][%d]", linha, coluna);
            scanf("%d", &m[linha][coluna]);
        }
    }
    for(linha=0;linha<2;linha++){
        for(coluna=0;coluna<2;coluna++){
            m[linha][coluna] = m[linha][coluna] * 2;
        }
    }
    printf("\nMatriz resultante:\n");
    for(linha=0;linha<2;linha++){
        for(coluna=0;coluna<2;coluna++){
            printf("%d\t", m[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}