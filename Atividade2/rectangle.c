#include <stdio.h>
#include <math.h>

int main(){

    float area, base, hei;

    printf("User, use this program to calculate a retangle area!\n");
    printf("Tell me the base and the height measures:\n");
    
    printf("Base:");
    scanf("%f", &base);

    printf("Height:");
    scanf("%f", &hei);

    area = base * hei;
    printf("This retangle area measures: %.2f area units", area);

    return 0;
}