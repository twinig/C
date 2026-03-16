#include <stdio.h>
#include <stdlib.h>

int main()
{
    double droneX, droneY;

    double xA=4; 
    double yD=4;
    double yB=10; 
    double xC=14;

    double xE=16;
    double yF=2;
    double yH=12;
    double xG=26;

    printf("digite a coordenada do drone:   ");
    scanf("%lf", &droneX);
    printf("digite a coordenada do drone:   ");
    scanf("%lf", &droneY);

    if(droneX >= xA && droneX <= xC && droneY >= yD && droneY <= yB){
        printf("O drone esta dentro da area azul %.2lf %.2lf.\n", droneX, droneY);
    }
    if(droneX >=xE && droneX <= xG && droneY >= yF && droneY <=yH){
        printf("O drone esta dentro da area vermelha %.2lf %.2lf.\n", droneX, droneY);
    }
    else{
        printf("O drone NAO esta nas areas permitidas \n");
    }
    return 0;
}
