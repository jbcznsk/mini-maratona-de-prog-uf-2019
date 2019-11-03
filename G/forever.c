#include <stdio.h>
#include <math.h>

int checaPrimo(unsigned long int p){
    int i;
    for(i = 2; i <= sqrt(p); i++){
        if (p % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){

    unsigned long int n, half,p;

    short s;

    s = scanf("%ld %ld", &n, &p);
    half = n/2;
    if(p > half){
        if (checaPrimo(p)){
            printf("sim\n");
            return 0;
        }
    }

    printf("nao\n");
    return 0;
}