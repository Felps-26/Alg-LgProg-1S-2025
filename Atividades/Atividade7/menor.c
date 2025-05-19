#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.c"

int main(int argc, char *argv[]) {
    int a, b, c;

    if(argc != 3 && argc != 4) {
        printf("Enter 2 or 3 numbers to compare.\n");
        return 1;

    } else if(argc == 3) {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        printf("The smaller value is: %d\n", return_smaller_value(a, b));

    } else if (argc == 4) {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        c = atoi(argv[3]);
        printf("The smallest value is: %d\n", return_smaller_value_3n(a, b, c));

    }

    return 0;
}