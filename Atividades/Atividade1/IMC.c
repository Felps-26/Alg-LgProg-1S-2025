#include <stdio.h>

int main(){

    //Declare variaveis weight e height:

    float wei;
    printf("User, tell me your weigth:\n");
    printf("weigth:");
    scanf("%f", &wei);
    
    float hei;
    printf("Now tell me your height:\n");
    printf("height:");
    scanf("%f", &hei);
    
    printf("\nUser, you weight %.2fkg, and you are %.2fm tall\n",wei, hei);

    //Calculo de IMC ou "BMI": wei/(hei)²:

    float BMI;
    BMI = wei / (hei * hei);

    printf("And your BMI is: %.2f", BMI);

    return 0;
}