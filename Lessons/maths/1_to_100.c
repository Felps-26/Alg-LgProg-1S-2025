#include <stdio.h>
#include <windows.h>


int main(){

    int i = 0;

    //do{
    //
    //    printf("%d\n", i);
    //    i++;
    //    Sleep(50); 
    //
    //} while(i <=100); 7

    for(i = 0; i <= 100; i++){
        
        printf("%d\n", i);
        Sleep(50); 
    }

    return 0;
}