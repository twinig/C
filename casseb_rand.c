#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    srand(time(0));
    int x;  
    int y = rand();
    scanf("%d", &x);
    y = rand() % x+1;
    printf("%d\n", y);
    return 0;
}