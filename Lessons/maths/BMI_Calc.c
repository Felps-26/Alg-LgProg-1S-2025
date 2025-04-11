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

    printf("And your BMI is: %.2f\n", BMI);

    if(BMI < 18.5){
        printf("\nYou are underweight!");
    }
    
    if(18.6 < BMI && BMI < 24.9){
        printf("\nYou are in normal weight!");
    }
        
    if(BMI > 25.0 && BMI < 29.9){
        printf("\nYou are overweight!");
    }

    if(BMI > 30 && BMI < 34.9){
        printf("\nYou are obese class I!");
    }

    if(BMI > 35 && BMI < 39,9){
        printf("\nYou are obese class II!");
    }

    if(BMI > 40){
        printf("\nYou are obese class III!");
    }

    return 0;
}