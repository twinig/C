#include <stdio.h>

int main() {
    int numeros[10];
    int maior, menor;
    int pos_maior = 0, pos_menor = 0; // Guardam as posições dos elementos

    // 1. Loop para preencher TODO o vetor primeiro
    for(int i = 0; i < 10; i++) {
        printf("Preencha o valor %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // 2. AGORA SIM, com o vetor cheio, definimos o primeiro elemento como o padrão
    maior = numeros[0];
    menor = numeros[0];

    // 3. Loop para comparar os valores (podemos começar do índice 1)
    for(int i = 1; i < 10; i++) {
        if(numeros[i] > maior) {
            maior = numeros[i];
            pos_maior = i; // Guarda onde o maior foi encontrado
        }
        if(numeros[i] < menor) {
            menor = numeros[i];
            pos_menor = i; // Guarda onde o menor foi encontrado
        }    
    }     

    // 4. Exibindo os resultados formatados
    printf("\nO maior numero e %d e esta na posicao %d\n", maior, pos_maior);
    printf("O menor numero e %d e esta na posicao %d\n", menor, pos_menor);

    return 0;
}