#include <stdlib.h>
#include <stdio.h>

int ** matrix_new (int nl, int nc){
    int **A = NULL;
    int l;
    A = (int **) malloc (nl * sizeof(int *));
    for (l = 0; l < nl; l++){
        A[l] = (int *) malloc (nc * sizeof(int));
    }
    return A;
}

void matrix_print (int **A, int nl, int nc){
    int l, c;
    for (l = 0; l < nl; l++){
        for (c = 0; c < nc; c++){
            printf ("%d ", A[l][c]);
        } printf ("\n");
    }
}

void matrix_free (int **A, int nl){
    int l;
    for (l = 0; l < nl; l++){
        free(A);
    }
}

void matrix_read (int **A, int nl, int nc){
    int l, c;
    for (l = 0; l < nl; l++){
        for (c = 0; c < nc; c++){
            scanf ("%d", &A[l][c]);
        }
    }
}

void matrix_sum (int **A, int **B, int **R, int nl, int nc){
    int l, c;
    for (l = 0; l < nl; l++){
        for (c = 0; c < nc; c++){
            R[l][c] = A[l][c] + B[l][c];
        }
    }
}