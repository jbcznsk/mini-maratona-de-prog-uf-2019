#include <stdio.h>
#include <math.h>
    

int main(){
    int n,soma,scanfreturn;
    scanfreturn = scanf ("%d ",&n);
    scanfreturn = scanf ("%d",&soma);
    if (soma <= n)
    {
        printf ("1\n");
    }
    else
    {
        int possibilidades = 0;
        int j = 0;
        int metade = n*3 + 1;
        int i;
        if (n % 2 == 0)
        {
            for (i=n*6 ; soma<=i ; i--)
            {
                if (i < metade)
                {
                    j--;
                }
                else
                {
                    j++;
                }
              possibilidades = possibilidades + j;
            }
        }
        else
        {
            for (i=n*6 ; soma<=i ; i--)
            {
            if (i < metade+1)
            {
                j--;
            }
            else
            {
                j++;
            }
                possibilidades = possibilidades + j;
            }
        }
        printf ("%f\n",possibilidades/pow(6,n));
    }



    return 0;
}