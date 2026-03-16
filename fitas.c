#include<stdio.h>
#include<stdlib.h>

int main()
{
    float p, faturamento;
    int f;
   
    printf("Digite a quantidade de fitas na locadora:   ");
    scanf("%i", &f);
    printf("Digite o valor individual da fita:  ");
    scanf("%f", &p);

    faturamento=p*(f/3)*12;

    printf("O faturamento anual da locadora e de : %.3f \n", faturamento);

    float atraso;

    atraso=(f/10) * (p*0.10);
    printf("o valor das multas por mes e: %.3f \n", atraso);

    printf("O faturamento anual com o atraso de fitas e de: %f \n", (faturamento+atraso*12));

    float decadenza;
    //ref ao ritual de ordem paranormal
    decadenza=f*0.02;

   printf("O numero de fitas ao final do ano:  %.3f \n", (f-decadenza)+(f*0.10));

    system("pause");
    return 0;
}