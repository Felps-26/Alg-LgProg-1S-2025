#include <stdio.h>
#define MAS_txt 256

int main(int argc, char *argv[]) {

    char text [MAS_txt];

    FILE *arq = fopen(argv[1], "w");

    if (arq == NULL) {
        fprintf(stderr, "Error opening file.\n");
        return 1;
    }

    fprintf(arq, argv[2]);
    
    fclose(arq);



    return 0;
}