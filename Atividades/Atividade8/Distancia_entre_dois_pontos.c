#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    double x;
    double y;
} cord;

double distance(cord a, cord b){
    return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

int main(int argc, char *argv[]){
    if (argc != 5){
        printf("\nUSE: %s Xa Ya Xb Yb\n", argv[0]);
        return 1;
    }

    cord a, b;
    a.x = atof(argv[1]);
    a.y = atof(argv[2]);
    b.x = atof(argv[3]);
    b.y = atof(argv[4]);

    double dist = distance(a, b);
    printf("Distance: %.2f\n", dist);

    return 0;
}