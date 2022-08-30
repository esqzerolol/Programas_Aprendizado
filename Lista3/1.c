#include <stdio.h>

/**
 * @brief 
 * 
 * @param n
 * @return Resultado do Fatorial 
 */
unsigned long int fat (unsigned int n);

int main (){

    int n, saida;
    scanf ("%d", &n);

    saida = fat(n);

    printf ("%d! = %d\n", n, saida);

    return 0;
}

unsigned long int fat (unsigned int n){

    unsigned long int fatorial = 1;
    int k;
 
    for (k=1; k <= n; k++) {
        fatorial *= k;
    }

    return fatorial;
}
