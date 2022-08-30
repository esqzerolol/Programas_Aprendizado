#include <stdio.h>

int main (){

    int num;
    int i, j;
    
    scanf ("%d", &num);
    int M[num][num];
    
    for (i = 0; i < num; i++){
        for (j = 0; j < num; j++){
            scanf ("%d", &M[i][j]);
        }
    }

    j--;
    
    for (i = 0; i < num; i++){
        printf ("%d\n", M[i][j]);
        j--;
    }

    return 0;
}