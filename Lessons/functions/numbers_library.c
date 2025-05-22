#include <stdio.h>

int return_bigger_value(int a, int b){
    if(a > b){
        return a;
    } else{
        return b;
    }
}

int return_bigger_value_3n(int a, int b, int c){
    int bigger = return_bigger_value(a, b);
    return return_bigger_value(return_bigger_value(a, b),c);
}

int return_smaller_value(int a, int b){
    if(a < b){
        return a;
    } else{
        return b;
    }
}
int return_smaller_value_3n(int a, int b, int c){
    int smaller = return_smaller_value(a, b);
    return return_smaller_value(return_smaller_value(a, b),c);
}

