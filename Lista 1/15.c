#include <stdio.h>

int main (){

    float a, b, c, d, e, f;
    float x, y;
    float Determinante, Determinante_x, Determinante_y;
    scanf ("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);

    Determinante    = (a * e) - (b * d);
    Determinante_x  = (c * e) - (f * b);
    Determinante_y  = (a * f) - (c * d);

    x = (Determinante_x / Determinante);
    y = (Determinante_y / Determinante);

    printf ("O VALOR DE X E = %.2f\n", x);
    printf ("O VALOR DE Y E = %.2f\n", y);

    return 0;
}