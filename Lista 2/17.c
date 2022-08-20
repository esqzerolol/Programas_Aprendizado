#include <stdio.h>
#include <math.h>

int fac (int n);

int main (){

    double entrada, termos, euler;
    int n;
    scanf ("%lf %lf", &entrada, &termos);

    for (n = 0; n <= termos; n++){
        euler += (pow(entrada, n)) / fac(n);
    }
    printf ("e^%.2lf = %.6lf\n", entrada, euler);

    return 0;
}

int fac (int n){
 
    unsigned long int fatorial = 1;
    int k;
 
    for (k=1; k <= n; k++) {
        fatorial *= k;
    }

    return fatorial;
}