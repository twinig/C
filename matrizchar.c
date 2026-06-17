#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Adicionado para funcionar o time(NULL)

int main() {
    srand(time(NULL));

    int x;
    int y;

    // 1. Primeiro perguntamos os tamanhos ao usuário
    printf("Tamanho de linhas (X): ");
    scanf("%d", &x);
    printf("Tamanho de colunas (Y): ");
    scanf("%d", &y);
  
    // 2. AGORA SIM declaramos a matriz com os tamanhos corretos
    char matriz[x][y];

    // 3. Loop para preencher com as letras aleatórias
    for(int i = 0; i < x; i++) {    
        for(int j = 0; j < y; j++) {
            matriz[i][j] = 'a' + (rand() % 26);
        }
    }

    printf("\n--- MATRIZ GERADA ---\n");
    
    // 4. Loop para imprimir a grade de caracteres na tela
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            printf("%c\t", matriz[i][j]); // %c para imprimir um único caractere
        }
        printf("\n"); // Quebra a linha ao fim de cada linha da matriz
    }

    return 0;
}