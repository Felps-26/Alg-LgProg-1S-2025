#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int qtd_lines = 0;
    float n;
    float *numbers;

    FILE *arq = fopen("dados.txt", "r");

    if (arq == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(arq, "%f", &n) != EOF){
        qtd_lines++;
    }

    numbers = malloc(sizeof(float) *qtd_lines);

    printf("qtd_lines = %d\n", qtd_lines);
    
    fclose(arq);

    return 0;
}