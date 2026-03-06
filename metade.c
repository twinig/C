#include<stdio.h>
#include<stdlib.h>

int main(){
 
    float nm, db, tp, mt;

    printf("Digite o numero: ");
    scanf("%f", &nm);

    db=nm*2;
    printf("O dobro do numero e: %2.f\n", db);
    tp=nm*3;
    printf("O triplo do numero e: %2.f\n", tp);
    mt=nm/2;
    printf("A metade do numero e: %2.f\n", mt);

    return 0;

}