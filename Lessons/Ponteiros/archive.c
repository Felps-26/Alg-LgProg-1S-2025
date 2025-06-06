#include <stdio.h>

/*
    archive opening ways
    'r' - read
    'w' - create/overwrite   (if file exists, it will be overwritten)
    'a' - creat, if file exists, append to the end
*/

int function(int *p){
    return 0;
}

int main(int argc, char *argv[]) {

    FILE *friday = fopen(argv[1], "w");
  

    if (friday == NULL) {
        fprintf(stderr, "Error opening file.\n");
        return 1;
    }

    fprintf(friday, "Hello, World!\n");

    fclose(friday);

    return 0;
}