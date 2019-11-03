#include <stdio.h>
    

int main(){

    int d;

    if (scanf("%d", &d)){
        if (d >= 0 && d <= 31){

            if (d <=3){
                printf("kiwi\n");
            } else if (d > 3 && d <= 5){
                printf("banana\n");
            } else if (d > 5 && d <= 10){
                printf("morango\n");
            } else {
                printf("ileso\n");
            }
        }
    }

    return 0;
}