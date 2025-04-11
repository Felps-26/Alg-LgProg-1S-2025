#include <stdio.h>
#include <windows.h>


int main(){

    int timer = 0;

    printf("Enter a timer in seconds\n");
    printf("Timer: ");
    scanf("%d", &timer);

    for(int i = 0; i <= timer; i++){

        printf("%d\n", i);
        Sleep(1000); 
    }

    //do{
    //    int i = 0;
    //    printf("%d\n", i);
    //    i++;
    //    Sleep(50); 
    //
    //} while(i <=100); 7


    return 0;
}