#include <stdio.h>

int n_primo(int n){
    if(n < 2){
        return 0;
    }
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n_primo(n)){
        printf("%d is prime\n", n);
    } else {
        printf("%d isn't prime\n", n);
    }
    return 0;
}