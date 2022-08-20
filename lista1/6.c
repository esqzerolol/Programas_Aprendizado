#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, D, D1, D2, D3, X1, X2;
    scanf ("%f%f%f", &a, &b, &c);


    D = (b*b) - (4*a*c);
    X1 = ((-b + sqrt(D)) / (2*a));
    X2 = ((-b - sqrt(D)) / (2*a));


    if (D > 0){
        printf ("RAIZES DISTINTAS\nX1 = %.2f\nX2 = %.2f\n", X1, X2);
    }
    else if (D == 0){
        printf ("RAIZ UNICA\nX1 = %.2f\n", X1);
    }
    else if (D < 0){
        printf ("RAIZES IMAGINARIAS\n");
    }

    return 0;
}