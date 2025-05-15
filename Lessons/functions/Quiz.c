#include <stdio.h>

int read_valid_value(int option1, int option2, char* option1_text, char* option2_text, char* question){
    int valid_option;

    do{
        printf("%s\nChoose an option: \n%d - %s\n\n%d - %s\n",question, option1, option1_text, option2, option2_text);
        scanf("%d", &valid_option);
    }while(valid_option != option1 && valid_option != option2);

    return valid_option;
}

int main(){

    int option, awnser;

    option = read_valid_value(1, 0, "Start QUIZ", "Exit QUIZ", "Do you want to start the quiz?");

    if(option == 1){

        awnser = read_valid_value(1, 2, "Rio de Janeiro", "Brasilia", "what is the capital of Brazil?");

        if (awnser == 2){
            printf("Correct answer!\n");
        }else{
            printf("Wrong answer!\n");
        }
    }

    return 0;
}