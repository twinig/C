#include<stdio.h>
#include<stdlib.h>

int main()
{
    float x, y;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &x);
    printf("Digite a segunda nota: ");
    scanf("%f", &y);

    float media = (x+y)/2;

    if(media>=7){
        printf("APROVADO!");
    }
    if(media<4){
        printf("REPROVADO!");
    }

    if(media >=4 && media<7){

        printf("recuperacao!");
    
    }
    system("pause");
    return 0;

}
