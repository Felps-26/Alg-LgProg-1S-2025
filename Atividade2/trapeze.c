#include <stdio.h>
#include <math.h>

int main(){

    float area, Ba, ba, hei;

    printf("User, use this program to calculate a trapeze area!\n");
    printf("tell me the bases and the height measures:\n");
    
    printf("Largest base:");
    scanf("%f", &Ba);

    printf("Smallest base:");
    scanf("%f", &ba);

    printf("Height:");
    scanf("%f", &hei);

    area = ((Ba + ba) * hei) / 2;

    printf("This trapeze area measures: %.2f area units", area);

    return 0;
}