#include <stdio.h>

double my_abs(double mod);

int main (){

    double num, erro_entrada, raizA = 1, erro_saida = 0;
    int i;
    
    scanf ("%lf %lf", &num, &erro_entrada);

    while (my_abs(num - (raizA * raizA)) > erro_entrada) {

    raizA = (((raizA) + (num / (raizA))) / 2);
    erro_saida = my_abs(num - (raizA * raizA));
    printf ("r: %.9lf, err: %.9lf\n", raizA, erro_saida);
    }

    return 0;
}

double my_abs (double mod){
    mod = mod * ((mod > 0) - (mod < 0));
    return mod;
}
    
