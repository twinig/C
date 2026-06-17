#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {1, 2, 3}, // O 3 esta na diagonal secundaria
        {4, 5, 6}, // O 5 esta na diagonal secundaria
        {7, 8, 9}  // O 7 esta na diagonal secundaria
    };
    
    int i, j;
    int tamanho = 3;

    printf("Elementos da Diagonal Secundaria:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            // A regra matematica da diagonal secundaria:
            // O indice da linha somado ao da coluna e sempre igual ao (tamanho da matriz - 1)
            if(i + j == tamanho - 1) {
                printf("%d ", matriz[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}