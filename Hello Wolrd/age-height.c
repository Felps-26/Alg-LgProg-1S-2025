#include <stdio.h>

int main(){

    int age;

    printf("Hello user, tell me your age:\n");
    printf("age:");
    scanf("%d", &age);
    
    float hei;

    printf("Tell me your height:\n");
    printf("height:");
    scanf("%f", &hei);

    printf("\nUser, you are %d years old, and you have %.2fm", age, hei);

    return 0;
}