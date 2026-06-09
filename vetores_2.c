#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    scanf("%d", &n);
    char vet[n];
    int i;

    for(i=0; i<n; i++){
        scanf(" %c", &vet[i]);
    }
    for(i=n-1; i>=0; i--){
        printf(" %c\n", vet[i]);
    }
    

    return 0;
}