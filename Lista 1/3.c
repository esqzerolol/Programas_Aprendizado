#include <stdio.h>

int main(){

    float  a, b, c , D;
    scanf ("%f%f%f", &a, &b, &c);
    D = ((b * b) - (4 * a * c));
    printf ("O VALOR DE DELTA E = %.2f", D);
    
    return 0;
}