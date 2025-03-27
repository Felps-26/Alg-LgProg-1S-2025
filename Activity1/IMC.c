#include <stdio.h>

int main(){

    int age;
    printf("Hello user, tell me your age:\n");
    printf("age:");
    scanf("%d", &age);
    getchar(); 
    float wei;
    printf("Tell me your weigth:\n");
    printf("weigth:");
    scanf("%f", &wei);
    getchar();
    float hei;
    printf("Tell me your height:\n");
    printf("height:");
    scanf("%f", &hei);
    getchar();
    printf("\nUser, you are %d years old, you have %.2fkg, and you are %.2fm tall\n", age, wei, hei);

    //calculate the IMC: wei/(hei)²
    
    float IMC;
    IMC = wei / (hei * hei);

    printf("your IMC is:%.2f", IMC);
    if(IMC < 18.50){
        printf("Under normal IMC")
    } else{
        printf("")
    }


    return 0;
}