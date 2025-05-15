#include <stdio.h>

int Start_QUIZ(int option1, int option2, char* option1_text, char* option2_text, char* question){
    int valid_option1;

    do{
        printf("%s\nChoose an option: \n%d - %s\n%d - %s\n",question, option1, option1_text, option2, option2_text);
        scanf("%d", &valid_option1);

        if(valid_option1 != option1 && valid_option1 != option2){
            printf("Invalid option! Please Try again.\n");
        }
    }while(valid_option1 != option1 && valid_option1 != option2);

    return valid_option1;
}

int read_valid_value(char* question, int option1, int option2, int option3, int option4, char* option1_text, char* option2_text, char* option3_text, char* option4_text){
    int valid_option2;

    do{
        printf("%s\nChoose an option: \n%d - %s\n%d - %s\n%d - %s\n%d - %s\n",question, option1, option1_text, option2, option2_text, option3, option3_text, option4, option4_text);
        scanf("%d", &valid_option2);

        if(valid_option2 != option1 && valid_option2 != option2 && valid_option2 != option3 && valid_option2 != option4){
            printf("Invalid option! Please Try again.\n");
        }
    }while(valid_option2 != option1 && valid_option2 != option2 && valid_option2 != option3 && valid_option2 != option4);

    return valid_option2;
}

int main(){

    int option, answer;

    option = Start_QUIZ(1, 0, "Start QUIZ", "Exit QUIZ", "Do you want to start the quiz?");

    if(option == 1){

        answer = read_valid_value(
            "\n\nWhat is the capital of Brazil?",
            1, 2, 3, 4,
            "Rio de Janeiro", "Brasilia", "Salvador", "Sao Paulo"
        );

        if (answer == 2){
            printf("Correct answer!\n");
        }else{
            printf("Wrong answer!\n");
        }

        answer = read_valid_value(
            "\n\nWhat is the capital of France?",
            1, 2, 3, 4,
            "Paris", "London", "Berlin", "Madrid"
        );
    } else{
        printf("Exiting the quiz...\n");
        printf("Please try our QUIZ at next time\n");
    }

    return 0;
}