int main(){

    int S, E;

    do{

        printf("This program will tell you prime numbers between two numbers!\n");
        printf("Enter a start number: ");
        scanf("%d", &S);
        printf("Enter an end number: ");
        scanf("%d", &E);

        if(S < 0 || E < 0){
            printf("The start and the end can't be negative");
        } else if(S > E){
            printf("The start number can't be greater than the end number");
        } else if(S == E){
            printf("The start and the end can't be equal");
        }

    }while(S < 0 || E < 0);


    printf("The prime numbers between %d and %d are: ", S, E);
    for(int i = S; i <= E; i++){
        int isPrime = 1;
        for(int j = 2; j <= i/2; j++){
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime && i > 1){
            printf("%d ", i);
        }
    }


    return 0;
}