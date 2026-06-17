#include <stdio.h>
#include <string.h>

int main() {

    char nome[50];
    char sobrenome[50];
    char email_final[] = {"@cesupa.com"};
    char destino[50];

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);

    strcat(nome,".");
    strcat(nome, sobrenome);
    strcat(nome, email_final);

    strcpy(destino, nome);

    printf("%s\n", destino);

}