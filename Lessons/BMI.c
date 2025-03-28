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
    
    if(18.5 <= BMI && BMI <= 24.9){
        printf("\nYou are in normal weight!");
    }
        
    if(BMI > 25.0){
        printf("\nYou are overweight, go exercise imediatily!!!");
    }
    

    return 0;
}