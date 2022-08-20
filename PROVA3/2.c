#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main (){

    int ordem, buffer, menor;
    int i, j, c, d;

    scanf ("%d", &ordem);
    int M[ordem][ordem];

    for (i = 0; i < ordem; i++) for (j = 0; j < ordem; j++) scanf ("%d", &M[i][j]);
    
    for (j = 0; j < ordem; j++){

        for (c = 0; c < ordem; c++){
            for (i = 0; i < ordem; i++){
                if ((M[i][j]) > (M[i+1][j]) && (i+1) < ordem){
                    buffer = M[i][j];
                    M[i][j] = M[i+1][j];
                    M[i+1][j] = buffer;
                }
            }
        }
    }

    for (i = 0; i < ordem; i++){
        for (j = 0; j < ordem; j++){
            printf ("%d ", M[i][j]);
        }
        printf ("\n");
    } 



    return 0;
}