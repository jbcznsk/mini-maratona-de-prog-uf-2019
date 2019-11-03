#include <stdio.h>
    

int main(){

    int notas[100], consultas[100];
    int n, q, i ,s;

    s = scanf("%d %d", &n, &q);

    for (i = 0; i < n; i++){
        s = scanf("%d", &notas[i]);
    }
    for (i = 0; i < q; i++){
        s = scanf("%d", &consultas[i]);
    }

    for (i = 1; i < n; i++)
    {
        int key = notas[i];
        int j = i-1;
        while(key < notas[j] && j >= 0)
        {
            notas[j+1] = notas[j];
            j--;
            
        }
        notas[j+1] = key;
    }

    for (i = 0; i < q; i++){
        printf("%d\n", notas[(n-1) - (consultas[i] - 1)]);
    }

    return 0;
}