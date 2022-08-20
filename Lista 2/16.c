#include <stdio.h>
#include <math.h>

int fac (int n);

int main (){

    double termos, entrada, cos;
    int n;
    scanf ("%lf %lf", &entrada, &termos);
    
    for (n = 0; n <= termos; n++){
        cos += (pow(-1,n) * pow(entrada,2*n)) / fac(2 * n);
    }
    printf ("cos(%.2lf) = %.6lf\n", entrada, cos);

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