#include<stdio.h>
#include<string.h>

int main(){
    
    char v[100];
    int i;
    int N;
    int a=0;
    int e=0;
    int iContador=0;
    int o=0;
    int u=0;

    printf("Digite uma string: ");
    scanf("%s", v);

    N = strlen(v);

    for(i = 0; i < N; i++){
        if(v[i] == 'a'|| v[i]=='A' ){
            a++;
        }
        if(v[i]=='e' || v[i]=='E'  ){
            e++;
        }
        if(v[i]=='i' || v[i]=='I'){
            iContador++;
        }
        if(v[i]=='o' || v[i]=='O' ){
            o++;
        }
        if(v[i]=='u' || v[i]=='U'){
            u++;
        }

    }
    printf(" a = %d", a);
    printf(" e = %d", e);
    printf(" i = %d", iContador);
    printf(" o = %d", o);
    printf(" u = %d", u);

    return 0;
}