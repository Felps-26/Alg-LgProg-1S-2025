#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    if(argc != 4){
        printf("Usage: %s <min> <max> <expected>\n", argv[0]);
        return 1;
    }

    int min = atoi(argv[1]);
    int max = atoi(argv[2]);
    int expected = atoi(argv[3]);

    // Validity checks
    if(min >= max){
        printf("Error: the minimum value must be less than the maximum value.\n");
        return 1;
    }
    if(expected < min || expected > max){
        printf("Error: the expected value must be between the minimum and maximum (inclusive).\n");
        return 1;
    }

    // Initialize random number generator
    srand(time(NULL));
    int drawn = rand() % (max - min + 1) + min;

    // Check if the expected number was drawn
    int success = (drawn == expected);

    // Show result
    printf("Drawn number: %d\n", drawn);
    printf("Result: %s\n", success ? "drawn" : "not drawn");

    // Write to log
    FILE *log = fopen("log.txt", "a");
    if (log == NULL){
        perror("Error opening log.txt");
        return 1;
    }

    fprintf(log, "minimum number: %d\n", min);
    fprintf(log, "maximum number: %d\n", max);
    fprintf(log, "expected number: %d\n", expected);
    fprintf(log, "drawn number: %d\n", drawn);
    fprintf(log, "result: %s\n\n", success ? "drawn" : "not drawn");

    fclose(log);

    return 0;
}