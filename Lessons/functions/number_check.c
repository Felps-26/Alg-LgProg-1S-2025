#include <stdio.h>
#include <string.h>
#include "numbers_library.c"

int  main(int argc, char *argv[])
{
    if(argc < 3 ){
        printf("Invalid arguments\n");
        return 1;

    }else if(strcmp(argv[1], "maior") == 0){
        if (argc < 4){
            printf("Invalid arguments\n");
            return 1;
        }
        int a = atoi(argv[2]);
        int b = atoi(argv[3]);
        printf("The bigger value is: %d\n", return_bigger_value(a, b));

    } else if (strcmp(argv[1], "menor") == 0){
        if (argc < 4){
            printf("Invalid arguments\n");
            return 1;
        }
        int a = atoi(argv[2]);
        int b = atoi(argv[3]);
        printf("The smaller value is: %d\n", return_smaller_value(a, b));

    } else if (strcmp(argv[1], "maior3") == 0){
        if (argc < 5){
            printf("Invalid arguments\n");
            return 1;
        }
        int a = atoi(argv[2]);
        int b = atoi(argv[3]);
        int c = atoi(argv[4]);
        printf("The biggest value is: %d\n", return_bigger_value_3n(a, b, c));

    } else if (strcmp(argv[1], "menor3") == 0){
        if (argc < 5){
            printf("Invalid arguments\n");
            return 1;
        }
        int a = atoi(argv[2]);
        int b = atoi(argv[3]);
        int c = atoi(argv[4]);
        printf("The smallest value is: %d\n", return_smaller_value_3n(a, b, c));

    } else {
        printf("Invalid arguments\n");
        return 1;
    }







    return 0;
}