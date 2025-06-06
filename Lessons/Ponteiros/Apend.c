#include <stdio.h>
#define MAS_txt 256

int main(int argc, char *argv[]) {

    char text [MAS_txt];

    FILE *friday = fopen(argv[1], "a");

    if (friday == NULL) {
        fprintf(stderr, "Error opening file.\n");
        return 1;
    }

    while(fgets(text, sizeof(text), friday)) {
        fprintf(stdout, text);
    }
    
    fclose(friday);



    return 0;
}