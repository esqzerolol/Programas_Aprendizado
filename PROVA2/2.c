#include <stdio.h>

int intercepto( double a, double b, double c, double *px, double *py);

int main (){

    double a, b, c, validacao, hold;
    double x = 0, y = 0;
    int casos;
    int i;
    scanf ("%d", &casos);
    
    for (i = 0; i < casos; i++){

        scanf ("%lf %lf %lf", &a, &b, &c);
        validacao = intercepto(a, b, c, &x, &y);

        if (validacao == -1) printf ("RETA INVALIDA\n");
        if (validacao == 1) {
            printf ("PARALELA AO EIXO X\n");
            printf ("Intercepto em Y: (0.00, %.2lf)\n", y);
        }
        if (validacao == 2) {
            printf ("PARALELA AO EIXO Y\n");
            printf ("Intercepto em X: (%.2lf, 0.00)\n", x);
        }
        if (validacao == 0) {
            printf ("NAO PARALELA\n");
            printf ("Intercepto em X: (%.2lf, 0.00)\n", y);
            printf ("Intercepto em Y: (0.00, %.2lf)\n", x);
        }
        x = 0;
        y = 0;
    }
 
    return 0;
}

int intercepto( double a, double b, double c, double *px, double *py){

    int resultado;
    if (a == 0 && b == 0) {
        return -1;
    }
    if (a == 0 && b != 0) {
        *py = (-c/b);
        return 1;
    }
    if (a != 0 && b == 0) {
        *px = (-c / a);
        return 2;
    }
    else {
        if (c == 0){
            *py = (-c / b);
            *px = (-c / a);
            return 0;
        }
        else {
            *py = (-c / a);
            *px = (-c / b);
            return 0;
        }
    }
}