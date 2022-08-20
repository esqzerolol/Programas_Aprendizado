#include <stdio.h>

int main (){

    int a, n1, n2, n3, n4, n5, TESTE;
    n1 = 0;
    n2 = 0;
    n3 = 0;
    n4 = 0;
    n5 = 0;
    scanf ("%d", &a);

    if (a >= 100000){
        printf ("NUMERO INVALIDO\n");
        return 0;
    }
    else if (a >= 10000){
        n5 = (a / 10000);
        n4 = (a / 1000) - (n5 * 10);
        n3 = (a / 100)  - (n5 * 100 + n4 * 10);
        n2 = (a / 10)   - (n5 * 1000 + n4 *100 + n3 * 10);
        n1 = (a)        - (n5 * 10000 + n4 * 1000 + n3 * 100 + n2 * 10);

        TESTE = (n1 * 10000) + (n2 * 1000) + (n3 * 100) + (n4 * 10) + n5;


    }
    else if (a >= 1000){
        n4 = (a / 1000);
        n3 = (a / 100) - (n4 * 10);
        n2 = (a / 10)  - (n4 * 100 + n3 * 10);  
        n1 = (a)       - (n4 * 1000 + n3 * 100 + n2 * 10);
        TESTE = (n1 * 1000) + (n2 * 100) + (n3 * 10) + n4;
    }
    else if (a >= 100){
        n3 = (a / 100);
        n2 = (a / 10) - (n3 * 10);
        n1 = (a)      - (n3 * 100 + n2 * 10);

        TESTE = (n1 * 100) + (n2 * 10) + n3;
    }
    else if (a >= 10){
        n2 = (a / 10);
        n1 = (a)     - (n2 * 10);

        TESTE = (n1 * 10) + n2;
    }
    else {
        n1 = a;

        TESTE = n1;
    }

    if (a == TESTE){
        printf ("PALINDROMO\n");
    }  
    else {
        printf ("NAO PALINDROMO\n");
    }
    return 0;
}