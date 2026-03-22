#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int temp;

    printf("Digite o primeiro termo: ");
    scanf("%i", &a);
    printf("Digite o segundo termo: ");
    scanf("%i", &b);

    for (int i = 3; i <= 10; i++){
        if ((i+1) % 2 ==1){
            temp = a + b;   
        } else {
            temp = a-b;
        }
        printf("%d", temp);

        a = b;
        b = temp;
    }

    return 0;
}