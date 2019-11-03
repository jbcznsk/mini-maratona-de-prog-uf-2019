#include <stdio.h>
    

int main(){
    int Ntreinos;
    int scanfreturn;
    scanfreturn = scanf("%d\n",&Ntreinos);
    float velmed;
    int i;
    float duracao,distancia;
    float recorde = 0;
    for (i=1 ; i<=Ntreinos ; i++)
    {
        scanfreturn = scanf("%f %f",&duracao,&distancia);
        velmed = distancia/duracao;
        if (velmed > recorde)
        {
            printf("%d\n",i);
            recorde = velmed;
        }
    }



    return 0;
}