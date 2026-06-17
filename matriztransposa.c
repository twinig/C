#include <stdio.h>

int main() {
    int matrizOriginal[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };
    int i, j;

    printf("--- Matriz Original (2x3) ---\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", matrizOriginal[i][j]);
        }
        printf("\n");
    }

    printf("\n--- Matriz Transposta (3x2) ---\n");
    // O segredo esta na inversao dos lacos de repeticao
    for(j = 0; j < 3; j++) { // O laco externo agora e a coluna (vai de 0 a 2)
        for(i = 0; i < 2; i++) { // O laco interno agora e a linha (vai de 0 a 1)
            // Imprimimos invertendo a ordem dos indices no printf
            printf("%d\t", matrizOriginal[i][j]); 
        }
        printf("\n");
    }

    return 0;
}