#include <stdio.h>
#include <math.h>

int main(){

    float area, Di, di;

    printf("User, use this program to calculate a rhombus area!\n");
    printf("Tell me the largest diagonal and the smallest diagonal measures:\n");
    
    printf("Largest diagonal:");
    scanf("%f", &Di);

    printf("Smallest diagonal:");
    scanf("%f", &di);

    area = (Di * di) / 2;
    printf("This rhombus area measures: %.2f area units", area);

    return 0;
}