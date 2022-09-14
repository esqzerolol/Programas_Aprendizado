#include <stdio.h>
#include "matrix.h"

typedef unsigned char uchar;
 
struct matriz{
    int nl, nc;
    uchar **px;
}
typedef struct matriz Matrix;

Matrix * matrix_new(int nl, int nc);
void matrix_free(Matrix * B);
Matrix * matrix_read(void);

int main (){

    


    return 0;
}