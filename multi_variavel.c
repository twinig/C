#include <stdio.h>
#include <stdlib.h>


int main(){
   float X;
   float Y;
   float Z;


   printf("insira o valor de X: ");
   scanf("%f", &X);
   printf("insira o valor de Y: ");
   scanf("%f", &Y);
   printf("insira o valor de Z: ");
   scanf("%f", &Z);

   if(X>Y && X>Z){
      if(Y>Z)
	      printf("X e a maior variavel, Y e a do meio, Z e a menor \n");
   }
   if(X>Y && X>Z){
	   if(Z>Y)
	      printf("X e a maior variavel, Z e a do meio, Y e a menor \n");
   }
   if(Y>X && Y>Z){
	   if(X>Z)
	      printf("y e a maior variavel, X e a do meio, Z e a menor \n");
   }
   if(Y>X && Y>Z){
	   if(Z>X)
	      printf("Y e a maior variavel, Z e a do meio, X e a menor \n");
   }
   if(Z>X && Z>Y){
	   if(X>Y)
	      printf("Z e a maior variavel, X e a do meio, Y e a menor \n");
   }
   if(Z>X && Z>Y){
	   if(Y>X)
	      printf("Z e a maior variavel, Y e a do meio, X e a menor \n");
   }
 
   system("pause");
   

   float x;
   float drob;
   float meta;

   printf("Informe o valor de x: ");
   scanf("%f", &x);

   drob = x*2;
   meta = x/2;

   if(x<10){

	   printf("para x menor que dez, o drobo e: %f \n", drob);	
   }
   if(x>10){

	   printf("para x maior que dez, a metade e: %f \n", meta);
   }
   system("pause");
   
   float a;
   float trip;

   printf("Insira o valor de a: ");
   scanf("%f", &a);
   
   trip =  a*3;
   if(trip>100){
	   printf("o triplo de a e maior que 100! \n");
     }
   if(trip<100){
	   printf("o triplo de a nao e maior que 100! \n");

   }

    system("pause");

   float b;
   float h;
   float A;

   printf("informe a base do retangulo: \n");
   scanf("%f", &b);
   printf("informe a altura do retangulo: \n");
   scanf("%f", &h);

   A =  b * h;

   if(A>0){
	   printf("A area e positiva! \n");

   }
   if(A<0){
	   printf("A area nao e positiva! \n");

   }

   system("pause");
   return 0;
}