#include <stdio.h>

int fibonacci( int t1, int t2, int n);

int main (){

    int termo_1, termo_2, num;
    scanf ("%d %d %d", &termo_1, &termo_2, &num);

    num = fibonacci(termo_1, termo_2, num);

    printf ("%d\n", num);

    return 0;
}

int fibonacci( int t1, int t2, int n){

    int n0, n1, n2;
    int i;
    n0 = t1;
    n1 = t2;
    for (i = 2; i < n; i++){
        n2 = n0 + n1;
        n0 = n1;
        n1 = n2;
    }
    return n2;
}