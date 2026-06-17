#include <stdio.h>

int main() {
    // Declaração e inicialização do array
    int numeros[6];

    // Loop para percorrer o array e somar os elementos
    for (int i = 0; i < 6; i++) {
        scanf("%d", &numeros[i]); // Soma o valor da posição atual à variável soma
    }

    for(int i = 5; i >= 0; i--){
        printf("%d", numeros[i]);    
        printf("\n");
    }
;

    return 0;
}