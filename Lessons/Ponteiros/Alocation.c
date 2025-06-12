#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int X;
    float Y;
} point;

int main(int argc, char *argv[]) {
    
    int qtd_lines = 0;
    int X;
    float Y;
    point *numbers;

    FILE *arq = fopen("dados_regressao.csv", "r");

    if (arq == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

   
    while(fscanf(arq, "%d,%f", &X, &Y) != EOF){
        qtd_lines++;
    }

   numbers = malloc(qtd_lines * sizeof(float));

    printf("qtd_lines = %d\n", qtd_lines);

    if(numbers != NULL){
        int i = 0;
        fseek(arq, 0, SEEK_SET); // Reset file pointer to the beginning
        while(fscanf(arq, "%d,%f", &X, &Y) != EOF){
            numbers[i].X = X;
            numbers[i].Y = Y;
            i++;
        }
    }

    
    for(int i = 0; i < qtd_lines; i++){
        printf("X: %d, Y: %.2f\n", numbers[i].X, numbers[i].Y);
    }
    
    fclose(arq);

    return 0;
}