#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a; 
    double b; 
    double c;
    double delta;
    double bhp;
    double bhn;

    printf("Insira o valor de a: ");
    scanf("%lf", &a);
    printf("Insira o valor de b: ");
    scanf("%lf", &b);
    printf("Insira o valor de c: ");
    scanf("%lf", &c);

    delta = (b*b) - (4 * a * c);

    sqrt (delta);
    if (delta < 0){
        printf("Delta nao pode ser negativo! \n");
    }
    if (delta == 0 ){
         printf("Raiz dupla na equaçãoo \n");
    }
    
    if(delta > 0){

        bhp = ((-b) + sqrt(delta)) / (2*a);
        bhn =  ((-b) - sqrt(delta)) / (2*a);
        printf("A raiz da equacao e: %.2lf \n", bhp);
        printf("A raiz da equacao e: %.2lf \n", bhn);
    }

    system("pause");
    return 0;
}
