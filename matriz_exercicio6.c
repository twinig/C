#include<stdio.h>

int main(){

    int m[3][3];
    int linha;
    int coluna;
    int negativos=0;

    printf("PREENCHIMENTO DE MATRIZ\n");

    for(linha=0;linha<3;linha++){
        for(coluna=0;coluna<3;coluna++){
            printf("Digite os numeros da matriz: ", linha, coluna);
            scanf("%d", &m[linha][coluna]);
        }

    }
    for(linha=0;linha<3;linha++){
        for(coluna=0;coluna<3;coluna++){
            if(m[linha][coluna] < 0){
                negativos++;
            }
        }
    }
    printf("\nA quantidade de numeros negativos digitados é de: %d\n", negativos);
}