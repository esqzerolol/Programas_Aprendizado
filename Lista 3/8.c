#include <stdio.h>
#include <math.h>

int next_power(int n, int p);
int *pi;

int main (){

    int num, pot, resultado, i;
    pi = &i;
    scanf ("%d %d", &num, &pot);


    resultado = next_power(num, pot);
    printf ("%d -> %d^%d = %d\n", num, i, pot, resultado);

    return 0;
}

int next_power(int n, int p){

    double i;
    double resultado;
    for (i = 0; pow(i, p) <= n; i++){
        if (p == 0) break;
    }
    if (i > 0) i--;
    else if (i == 0) i = n;

    resultado = pow(i, p);
    *pi = i;
    return resultado;
}
