#include <stdio.h>
#include <string.h>

#define size 256

int main() {
   
    //String declaration
    char word[] = "knoledge";
    char word2[] = {'k', 'n', 'o', 'l', 'e', 'd', 'g', 'e', '\0'};
    char phrase[size] = ""; 
    char word3[size] = ""; 
    char word4[size]; 
    
    printf("%s", word);
    printf("\n%c", word[3]);

    printf("\n%s", word2);

    printf("\nEnter a phrase: ");
    fgets(phrase, size, stdin); 
    printf("%s", phrase);

    printf("\nEnter a word: ");
    fflush(stdin); // Clear the input buffer
    fgets(word3, size, stdin); 

    printf("\nEnter another word: ");
    fflush(stdin); // Clear the input buffer
    fgets(word4, size, stdin);

    if (strcmp(word3, word4) == 0) {
        printf("\nThe words are the same.");

    } else {
        printf("\nThe words are different.");

    }

    printf("\nThe length of the first word is: %d", strlen(word3) - 1);
    printf("\nThe length of the second word is: %d", strlen(word4) - 1);

    for(int i = 0; i < strlen(word3) - 1; i++) {
        printf("\nThe character at position %d is: %c", i, word3[i]);
    }
    printf("\n");
    for(int i = 0; i < strlen(word4) - 1; i++) {
        printf("\nThe character at position %d is: %c", i, word4[i]);
    }

    // print the word 3 in reverse order
    printf("\n\nThe word 1 in reverse order is: ");
    for(int i = strlen(word3) - 2; i >= 0; i--) {
        printf("%c", word3[i]);
    }

    strcat(word3, word4); // Concatenate word3 and word4
    printf("\n\nThe concatenated word is: %s", word3);
    
    return 0;
}