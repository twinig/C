#include <stdio.h>

int main() {
    int matriz[3][4] = {
        {1, 2, 3, 4},   // Soma = 10
        {5, 5, 5, 5},   // Soma = 20
        {10, 0, 10, 0}  // Soma = 20
    };
    
    int vetorSomas[3] = {0, 0, 0}; // Inicializa o vetor zerado
    int i, j;

    // Varrendo a matriz para calcular as somas
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            // A posicao [i] do vetor acumula os elementos da linha i
            vetorSomas[i] += matriz[i][j];
        }
    }

    // Imprimindo o vetor resultante
    printf("--- Soma de cada linha ---\n");
    for(i = 0; i < 3; i++) {
        printf("Linha %d: Soma = %d\n", i, vetorSomas[i]);
    }

    return 0;
}