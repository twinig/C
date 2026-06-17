#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {15,  8, 22},
        { 4, 35,  2},
        {19, 12, 27}
    };
    
    int i, j;
    
    // O truque: comecar assumindo que o primeiro numero e o maior e o menor!
    int maior = matriz[0][0];
    int menor = matriz[0][0];

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            // Se encontrar alguem maior do que o salvo, atualiza o 'maior'
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
            // Se encontrar alguem menor do que o salvo, atualiza o 'menor'
            if(matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }

    printf("O MAIOR valor encontrado foi: %d\n", maior);
    printf("O MENOR valor encontrado foi: %d\n", menor);

    return 0;
}