#include <stdio.h>

int ** matrix (int nl, int nc);

int main (){

    int ordem;
    scanf ("%d", &ordem);
    

    return 0;
}

int ** matrix (int nl, int nc){
    int **A = NULL;
    int l;
    A = (int **) malloc (nl * sizeof(int *));
    for (l = 0; l < nl; l++){
        A[l] = (int *) malloc (nc * sizeof(int));
    }
    return A;
}