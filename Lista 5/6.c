#include <stdio.h>
#include <stdlib.h>

int main (){

    int maior, soma = 0;
    int i, j;
    int V[6][6];


    for (i = 0; i < 6; i++){
        for (j = 0; j < 6; j++) scanf ("%d", &V[i][j]);
        }

    for (i = 1; i < 5; i++){
        for (j = 1; j < 5; j++){
            soma =  (V[i-1][j-1] + V[i-1][j] + V[i-1][j+1] + V[i][j] + V[i+1][j-1] + V[i+1][j] + V[i+1][j+1]);
            if (abs(soma) > maior) maior = soma;
        }
    }

    printf ("%d\n", maior);
    
    return 0;
}