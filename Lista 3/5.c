#include <stdio.h>
#include <math.h>

int raizesEq2Grau (double a, double b, double c, double * x1, double * x2);

int main (){

    double a, b, c;
    double x1, x2;
    int r;
    scanf("%lf%lf%lf", &a, &b, &c);
    r = raizesEq2Grau(a, b, c, &x1, &x2);

    if (r == 0){
        printf ("RAIZ UNICA\n");
        printf ("X1 = %.02lf\n", x1);
    }
    else if (r == 1){
        printf ("RAIZES DISTINTAS\n");
        printf ("X1 = %.02lf\n", x1);
        printf ("X2 = %.02lf\n", x2);
    }
    else {
        printf ("RAIZES IMAGINARIAS\n");
    }

    return 0;
}

int raizesEq2Grau (double a, double b, double c, double * x1, double * x2){

    if (a == 0){
        if (b != 0) {
            *x1 = -c/b;
            return 0;
        }
        else {
            return -1;
        }
    }

    double delta = (pow(b,2) - (4 * a * c));

    if (delta == 0){
        *x1 = (-b / (2 * a));
        return 0;
    }
    else if (delta > 0){
        *x1 = ((-b + sqrt(delta)) / (2 * a));
        *x2 = ((-b - sqrt(delta)) / (2 * a));
        return 1;
    }
    else {
        return 2;
    }

}