#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "matrix.h"

int main (){

    int **R, **A, **B;
    R = A = B = NULL;
    A = matrix_new (3,4);
    B = matrix_new (3,4);
    R = matrix_new (3,4);
    matrix_read (A, 3, 4);
    matrix_read (B, 3, 4);
    matrix_sum (A, B, R, 3, 4);
    matrix_print (A, 3, 4);
    matrix_print (B, 3, 4);
    matrix_print (R, 3, 4);
    matrix_free (A, 3);
    matrix_free (B, 3);
    matrix_free (R, 3);
    return 0;
}