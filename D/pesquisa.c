#include <stdio.h>
    

int main(){
    int scanfreturn;
    long int N;
    scanfreturn = scanf("%ld\n",&N);
    long int casas[N];
    long int i;
    for  (i=0 ; i<N ; i++)
    {
        scanfreturn = scanf("%ld ",&casas[i]);
    }
    int Q;
    scanfreturn = scanf("%d\n",&Q);
    long int A,B,soma;
    for (i=0 ; i<Q ; i++)
    {
        scanfreturn = scanf("%ld",&A);
        scanfreturn = scanf("%ld",&B);
        soma = 0;
        for (A=A ; A<=B ; A++)
        {
            soma = soma + casas[A-1];
        }
        printf("%ld\n",soma);
    }

    return 0;
}