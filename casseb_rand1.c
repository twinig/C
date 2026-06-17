#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
   
    srand(time(0));
    int a = 0;
    int b = 0;
    int i;
    int N;
    int y = rand();

    while(a >= b){
        printf("Digite o valor de a");
        scanf("%d", &a);
        printf("Digite o valor de b");
        scanf("%d", &b);
    }
    printf("Digite quantos valores : ");
    scanf("%d", &N);
    
    for(i = 0; i < N; i++){
        y =  a+rand() % (b - a + 1);
        printf("%d\n", y);
    }
    return 0;
}

 
