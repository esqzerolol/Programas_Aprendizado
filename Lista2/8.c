#include <stdio.h>

int fac (int n);

int main (){

    unsigned int times;
    int finais;
    int i = 0, k = 1, finalI = 0, times1 = 1, times2 = 1;

    scanf ("%d", &times);
    finais = (fac(times) / (2 * fac(times - 2)));

     if (times <= 1) {
         printf ("Campeonato invalido!\n");
         return 0;
     }
     for (i = 0; i < finais; i++){    
        finalI++;
        if (times2 < times) times2++;
        else {
            k++;
            times1++;
            times2 = 1 + k;
        }
        printf ("Final %d: Time%d X Time%d\n", finalI, times1, times2);
    }
    


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