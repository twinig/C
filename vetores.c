#include<stdio.h>
#include <string.h>

int main(){

    char aluno[5][20] = {"Pedro", "Sophoso", "Kali", "Joao", "Raimundo"};
    char escolha[20];
    int i;
    int esta = 0;

    printf("Digite o nome de um aluno");
    scanf("%s", escolha);

    for(i=0; i < 5; i++){
        if(strcmp(escolha, aluno[i])== 0){
            printf("Aluno está na lista!");
            printf("Aluno está na posição %d\n", i);
            esta = 1;
        }
    }
    if(esta == 0){
        printf("Aluno não está na lista");
    }

    return 0;
}