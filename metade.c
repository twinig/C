#include<stdio.h>
#include<stdlib.h>

int main(){
 
    //definindo as variaveis
    float nm, db, tp, mt;

    //definindo o valor das variaveis
    printf("Digite o numero: ");
    scanf("%f", &nm);

    //calculos da variavel nm
    db=nm*2;
    printf("O dobro do numero e: %2.f\n", db);
    tp=nm*3;
    printf("O triplo do numero e: %2.f\n", tp);
    mt=nm/2;
    printf("A metade do numero e: %2.f\n", mt);

    return 0;

}