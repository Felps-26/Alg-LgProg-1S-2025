#include <stdio.h>
#include <math.h>


int main(){

    float area, raid, pi = 3.14;

    printf("User, use this program to calculate a circunference area!");

    printf("\nTell me the circunference radius: ");
    scanf("%f", &raid);

    area = pi * (raid * raid);

    printf("This circumference area measures %.2f area units\n", area);

    return 0;
}