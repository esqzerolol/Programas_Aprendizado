#include <stdio.h>

int somaDivisores (int num);

int main (){

    int num, soma;
    scanf ("%d", &num);

    soma = somaDivisores(num);

    if (soma == num) printf ("= %d (NUMERO PERFEITO)\n", soma);
    else printf ("= %d (NUMERO NAO E PERFEITO)\n", soma);

    return 0;
}

int somaDivisores (int num){

    int perfeito;
    int i;
    int n, soma = 1;
 
    printf ("%d = 1 ", num);
 
    for(n = 1;n <= num; n++){
 
        if (num % n == 0 && n != 1){
 
            perfeito = n;
            if (perfeito == num) break;
            soma += perfeito;
            printf ("+ %d ", perfeito);
        }
    }
    return soma;
}

