#include <stdio.h>

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("The bigger value is: %d\n", return_bigger_value(a, b));
    printf("The smaller value is: %d\n", return_smaller_value(a, b));

    return 0;
}