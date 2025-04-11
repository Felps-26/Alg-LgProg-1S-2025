#include <stdio.h>
#include <windows.h>


int main(){

    int i = 0;

    do{

        printf("%d\n", i);
        i++;
        Sleep(50); 

    } while(i <=100); 
    
    return 0;
}