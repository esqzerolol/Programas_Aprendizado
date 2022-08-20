#include <stdio.h>

int main (){

    float f, p, C, M;
    scanf ("%f%f", &f, &p);
    C = (5 * (f-32)) / 9;
    M = p * 25.4;
    printf ("O VALOR EM CELSIUS = %.2f \nA QUANTIDADE DE CHUVA E = %.2f\n", C, M);

    return 0;
}