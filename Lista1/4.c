#include <stdio.h>

int main (){

    float a, b, c, d, DET;
    scanf ("%f%f%f%f", &a, &b, &c, &d);
    DET = (a*d) - (b*c);
    printf ("O VALOR DO DETERMINANTE E = %.2f\n", DET);

    return 0;
}