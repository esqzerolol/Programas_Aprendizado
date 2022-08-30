#include <stdlib.h>
#include <stdio.h>

int ** matrix_new (int nl, int nc);
void matrix_print (int **A, int nl, int nc);
void matrix_free (int **A, int nl);
void matrix_read (int **A, int nl, int nc);
void matrix_sum (int **A, int **B, int **R, int nl, int nc);