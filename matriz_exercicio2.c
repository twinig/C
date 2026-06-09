#include<stdio.h>

int main(){

    int m[3][3];
    int linha;
    int coluna;
    int SomaDiagonal;

    printf("Preenchimento da matriz");
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            printf("Digite o valor da sua posição [%d][%d]", linha, coluna);
            scanf("%d", &m[linha][coluna]);
        }
    }
    printf("\nSua Matriz:\n");
        for(linha = 0; linha < 3; linha++){
            for(coluna = 0; coluna < 3; coluna++){
                printf("%d\t", m[linha][coluna]);
            }
        printf("\n");
        }
    
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna++){
            if(linha == coluna){
                SomaDiagonal += m[linha][coluna];
            }
        }
    }
    printf("\n A soma diagonal da principal é: %d\n", SomaDiagonal);
}