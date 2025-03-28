#include <stdio.h>
#include <math.h>


int main(void){

//Variaveis

int A, B, soma, subtr, mult, divisI, rest, incrA, decrA, incrB, decrB;
float radicA, radicB, poten, divis;

    printf("Digite o primeiro valor:\n");
    scanf("%d", &A);
    printf("Digite o segundo valor:\n");
    scanf("%d", &B);
    
//Operacoes
   
    soma = A + B;
    subtr = A - B;
    mult = A * B;
    divis = A / B;
    divisI = A / B;
    rest = A % B;
    poten = pow(A,B);
    radicA = sqrt(A);
    radicB = sqrt(B);
    incrA = A + 1;
    decrA = A - 1;
    incrB = B + 1;
    decrB = B - 1;

//Resultados

    printf("Resultados:\n");
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtr); 
    printf("Multiplicacao: %d\n", mult);
    printf("Divisao: %.2f\n", divis);
    printf("Divisao inteira: %d\n", divisI);
    printf("Resto: %d\n", rest);
    printf("Potenciacao: %.0f\n", poten);
    printf("Raiz de A: %.2f\n", radicA);
    printf("Raiz de B: %.2f\n", radicB);
    printf("Incremento de A: %d\n", incrA);
    printf("Decremento de A: %d\n", decrA);
    printf("Incremento de B: %d\n", incrB);
    printf("Decremento de B: %d\n", decrB);

}