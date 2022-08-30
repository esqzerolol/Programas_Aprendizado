#include <stdio.h>

int main (){

    int n1,n2,n3,N;
    
    scanf ("%d%d%d", &n1, &n2, &n3);
    N = n1*100 + n2*10 + n3;

    if (n1 >= 10 || n2 >= 10 || n3 >= 10){
        printf ("DIGITO INVALIDO\n");
    }
    else {
        printf ("%d, %d\n", N, N*N);
    }
    
    return 0;
}