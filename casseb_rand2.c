#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));


    int i
    int vet[10];
    int valorPar;
    
    for(i = 0; i < 10; i++){
        valorPar = 10+rand() % (99 - 10);
        if(valorPar%2==0){
            vet[i] = valorPar;
        }
        else{
            i--;
        }
    }
    for(i = 0; i < 10; i++){
        printf("%i\n", vet[i]);
    }


}