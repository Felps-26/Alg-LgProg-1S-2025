#include <stdio.h>
#include <math.h>

int main(){

    float area, side;

    printf("User, use this program to calculate a square area!\n");
    printf("Tell me the side measure:\n");
    scanf("%f", &side);

    area = side * side;
    printf("This square area measures: %.2f area units", area);

    return 0;
}