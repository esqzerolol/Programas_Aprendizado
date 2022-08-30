#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, x1, x2, D;
    scanf ("%f%f%f", &a, &b, &c);

    D = (b*b) - (4*a*c);
    x1 = ((-b + sqrt(D)) / (2*a));
    x2 = ((-b - sqrt(D)) / (2*a));
     
    if (D < 0){
            printf ("POSICOES IMAGINARIAS\n");
            return 0;
        }
    else if (D >= 0 && x1 <= 5 && x1 >= -5 && x2 <= 5 && x2 >= -5){
            printf ("POSICOES: X1=%.2f e X2=%.2f\n", x1, x2);
        }
    else {
            printf ("POSICOES: X1=%.2f e X2=%.2f (FORA DO EXPERIMENTO)\n", x1, x2);
        }

    

    if ((((int)a + (int)b + (int)c) % 3) == 0){
        printf ("FATO1: DESAPARECIDA\n");
    }
    if (((int)c % 2) == 0 && c < (a + b)){
        printf ("FATO2: ORIGEM\n");
    }
    


    return 0;
}