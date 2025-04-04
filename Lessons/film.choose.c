#include <stdio.h>

int main(){

int LI;
    printf("Hello user, do you want to watch:\n1-light film\n2-intense film?\n");
    printf("Option:");
    scanf("%d", &LI);

    if(LI == 1){
        int CA;
            printf("Some examples of light films genres are:\n1-Comedy\n2-Animations\n");
            printf("Option:");
            scanf("%d", &CA);

            if(CA = 1){
                printf("If you want to whatch some comedy, I'd recomend you to watch As Branquelas!");
            }
            
            if(CA = 2){
                printf("If you want to watch some animation, I'd recomend you to watch Toy Story!");

            }

    }
    
    if(LI = 2){
        int HA;
        printf("Some examples of intese films genres are:\n1-Horror\n2-Action\n");
        printf("Option:");
        scanf("%d", &HA);
        
        if(HA = 1){
            int PS;
            printf("You want to watch some:\n1-Psiocological Horror\n2-Supernatural Horror\n");
            printf("Option:");
            scanf("%d", &PS);
            if(PS = 1){
                printf("If want to watch some Psi.Horror, I'd recomend you to wacth Corra!");
            }
            if(PS = 2){
                printf("If you want ti watch some Sup. Horror, I'd recomend you to watch Invocacao do Mal");
            }

        }


    }



    return 0;
}