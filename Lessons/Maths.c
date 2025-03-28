#include <stdio.h>
#include <math.h>


int main(){

int A, B, soma, subtr, mult, divis;
float radicA, radicB, poten;

   printf("Digite o primeiro valor:\n");
   scanf("%d", &A);
   printf("Digite o segundo valor:\n");
   scanf("%d", &B);


   soma = A + B;
   subtr = A - B;
   mult = A * B;
   divis = A / B;
   poten = pow(A,B);
   radicA = sqrt(A);
   radicB = sqrt(B);


   printf("Resultados:\n");
   printf("Soma: %d\n", soma);
   printf("Subtracao: %d\n", subtr); 
   printf("Multiplicacao: %d\n", mult);
   printf("Divisao: %d\n", divis);
   printf("Potenciacao: %.0f\n", poten);
   printf("Raiz de A: %.2f\n", radicA);
   printf("Raiz de B: %.2f\n", radicB);


    return 0;
}