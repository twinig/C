#include <stdio.h>

int main() {
    int notas[5] = {7, 8, 6, 9, 5};
    int soma = 0;
    float media;

    for (int i = 0; i < 5; i++) {
        soma += notas[i];
    }

    media = (float)soma / 5;
    printf("Media: %.2f\n", media); // Media: 7.00

    return 0;
}