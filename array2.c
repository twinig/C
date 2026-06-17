#include<stdio.h>

int main() {

    float notas[4];
    int soma=0;
    float media;
    int i;

    
    for(i = 0; i < 4; i++){
        printf("Insira as notas: ");
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = (float)soma / 4;

    if(media > 7.0){
        printf("APROVADO %f", media);
    }
    else {
        printf("REPROVADO %f", media);
    }

}