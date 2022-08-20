#include <stdio.h>

int separaDigitos (int num, int *pc, int*pd, int *pu);

int main (){

    int num, c, d, u;
    scanf ("%d", &num);
    
    num = separaDigitos(num, &c, &d, &u);

    printf ("%d%d%d\n", u, d, c);

    return  0;
}

int separaDigitos (int num, int *pc, int*pd, int *pu){

        int n1, n2, n3;

        n3 = (num / 100);
        n2 = (num / 10) - (n3 * 10);
        n1 = (num)      - (n3 * 100 + n2 * 10);

        *pc = n3;
        *pd = n2;
        *pu = n1;
}