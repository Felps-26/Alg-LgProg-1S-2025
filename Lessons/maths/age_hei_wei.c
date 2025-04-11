#include <stdio.h>

int main(void){

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


    float double_wei = wei * 2.0;
    printf("double the weight is %.2f", double_wei);
    
}